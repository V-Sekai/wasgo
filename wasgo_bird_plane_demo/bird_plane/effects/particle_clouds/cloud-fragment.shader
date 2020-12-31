shader_type spatial;

uniform sampler2D noise;
uniform float transmission : hint_range(0,1);
uniform float proximity_fade_distance;

void vertex(){
	mat4 mat_world = mat4(normalize(CAMERA_MATRIX[0])*length(WORLD_MATRIX[0]),normalize(CAMERA_MATRIX[1])*length(WORLD_MATRIX[0]),normalize(CAMERA_MATRIX[2])*length(WORLD_MATRIX[2]),WORLD_MATRIX[3]);
	mat_world = mat_world * mat4( vec4(cos(INSTANCE_CUSTOM.x),-sin(INSTANCE_CUSTOM.x), 0.0, 0.0), vec4(sin(INSTANCE_CUSTOM.x), cos(INSTANCE_CUSTOM.x), 0.0, 0.0),vec4(0.0, 0.0, 1.0, 0.0),vec4(0.0, 0.0, 0.0, 1.0));
	MODELVIEW_MATRIX = INV_CAMERA_MATRIX * mat_world;
}

void fragment(){
	TRANSMISSION = vec3(transmission);
	float depth_tex = textureLod(DEPTH_TEXTURE,SCREEN_UV,0.0).r;
	vec4 world_pos = INV_PROJECTION_MATRIX * vec4(SCREEN_UV*2.0-1.0,depth_tex*2.0-1.0,1.0);
	world_pos.xyz/=world_pos.w;
	float gradient = smoothstep(0.0,1.0,1.0-distance(UV,vec2(0.5))*2.0);
	vec4 albedo_color = vec4(1.0,1.0,1.0,gradient);
	vec4 noise_color = texture(noise,UV);
	ALBEDO = COLOR.rgb*albedo_color.rgb*noise_color.rgb;
	ALPHA = COLOR.a*albedo_color.a*noise_color.a;
	ALPHA*=clamp(1.0-smoothstep(world_pos.z+proximity_fade_distance,world_pos.z,VERTEX.z),0.0,1.0);
}