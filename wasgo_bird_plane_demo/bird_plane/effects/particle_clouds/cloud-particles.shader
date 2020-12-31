shader_type particles;
uniform vec3 emission_box_extents;
uniform vec3 direction;
uniform float spread;
uniform float flatness;
uniform float radial_accel;
uniform float tangent_accel;
uniform float scale;
uniform float radial_accel_random;
uniform float tangent_accel_random;
uniform float damping_random;
uniform float scale_random;
uniform float hue_variation_random;
uniform float anim_speed_random;
uniform float anim_offset_random;
uniform vec4 color : hint_color;
uniform sampler2D color_ramp;
uniform float alpha : hint_range(0,1);


float rand_from_seed(inout uint seed) {
	int k;
	int s = int(seed);
	if (s == 0)
	s = 305420679;
	k = s / 127773;
	s = 16807 * (s - k * 127773) - 2836 * k;
	if (s < 0)
		s += 2147483647;
	seed = uint(s);
	return float(seed % uint(65536)) / 65535.0;
}

float rand_from_seed_m1_p1(inout uint seed) {
	return rand_from_seed(seed) * 2.0 - 1.0;
}

uint hash(uint x) {
	x = ((x >> uint(16)) ^ x) * uint(73244475);
	x = ((x >> uint(16)) ^ x) * uint(73244475);
	x = (x >> uint(16)) ^ x;
	return x;
}

void vertex() {
	uint base_number = NUMBER;
	uint alt_seed = hash(base_number + uint(1) + RANDOM_SEED);
	float angle_rand = rand_from_seed(alt_seed);
	float scale_rand = rand_from_seed(alt_seed);
	float hue_rot_rand = rand_from_seed(alt_seed);
	float anim_offset_rand = rand_from_seed(alt_seed);
	float pi = 3.14159;
	float degree_to_rad = pi / 180.0;

	bool restart = false;
	if (CUSTOM.y > CUSTOM.w) {
		restart = true;
	}

	if (RESTART || restart) {
		float tex_linear_velocity = 0.0;
		float tex_angle = 0.0;
		float tex_anim_offset = 0.0;
		float spread_rad = spread * degree_to_rad;
		float angle1_rad = rand_from_seed_m1_p1(alt_seed) * spread_rad;
		float angle2_rad = rand_from_seed_m1_p1(alt_seed) * spread_rad * (1.0 - flatness);
		angle1_rad += direction.z != 0.0 ? atan(direction.x, direction.z) : sign(direction.x) * (pi / 2.0);
		angle2_rad += direction.z != 0.0 ? atan(direction.y, abs(direction.z)) : (direction.x != 0.0 ? atan(direction.y, abs(direction.x)) : sign(direction.y) * (pi / 2.0));
		vec3 direction_xz = vec3(sin(angle1_rad), 0.0, cos(angle1_rad));
		vec3 direction_yz = vec3(0.0, sin(angle2_rad), cos(angle2_rad));
		direction_yz.z = direction_yz.z / max(0.0001,sqrt(abs(direction_yz.z))); // better uniform distribution
		vec3 vec_direction = vec3(direction_xz.x * direction_yz.z, direction_yz.y, direction_xz.z * direction_yz.z);
		vec_direction = normalize(vec_direction);
		VELOCITY = vec_direction * 1.0;
		CUSTOM.y = 0.0;
		CUSTOM.w = 1.0;
		TRANSFORM[3].xyz = vec3(rand_from_seed(alt_seed) * 2.0 - 1.0, rand_from_seed(alt_seed) * 2.0 - 1.0, rand_from_seed(alt_seed) * 2.0 - 1.0) * emission_box_extents;
		VELOCITY = (EMISSION_TRANSFORM * vec4(VELOCITY, 0.0)).xyz;
		TRANSFORM = EMISSION_TRANSFORM * TRANSFORM;
	} else {
		CUSTOM.y += DELTA / LIFETIME;
		float tex_linear_velocity = 0.0;
		float tex_angular_velocity = 0.0;
		float tex_linear_accel = 0.0;
		float tex_radial_accel = 0.0;
		float tex_tangent_accel = 0.0;
		float tex_damping = 0.0;
		float tex_angle = 0.0;
		float tex_anim_speed = 0.0;
		float tex_anim_offset = 0.0;
		vec3 force;
		vec3 pos = TRANSFORM[3].xyz;
		// apply linear acceleration
		force += length(VELOCITY) > 0.0 ? normalize(VELOCITY) * 1.0 : vec3(0.0);
		// apply radial acceleration
		vec3 org = EMISSION_TRANSFORM[3].xyz;
		vec3 diff = pos - org;
		force += length(diff) > 0.0 ? normalize(diff) * (radial_accel + tex_radial_accel) * mix(1.0, rand_from_seed(alt_seed), radial_accel_random) : vec3(0.0);
		// apply tangential acceleration;
		vec3 crossDiff = cross(normalize(diff),vec3(0.0));
		force += length(crossDiff) > 0.0 ? normalize(crossDiff) * ((tangent_accel + tex_tangent_accel) * mix(1.0, rand_from_seed(alt_seed), tangent_accel_random)) : vec3(0.0);
		// apply attractor forces
		VELOCITY += force * DELTA;
	}
	float tex_scale = 1.0;
	COLOR = color * textureLod(color_ramp, vec2(CUSTOM.y, 0.0), 0.0);
	COLOR.a *= alpha;

	TRANSFORM[0].xyz = normalize(TRANSFORM[0].xyz);
	TRANSFORM[1].xyz = normalize(TRANSFORM[1].xyz);
	TRANSFORM[2].xyz = normalize(TRANSFORM[2].xyz);
	float base_scale = tex_scale * mix(scale, 1.0, scale_random * scale_rand);
	if (base_scale < 0.000001) {
		base_scale = 0.000001;
	}
	TRANSFORM[0].xyz *= base_scale;
	TRANSFORM[1].xyz *= base_scale;
	TRANSFORM[2].xyz *= base_scale;
	if (CUSTOM.y > CUSTOM.w) {
		ACTIVE = false;
	}
}