tool
extends Spatial

export(bool) var refresh setget refresh
export(int) var clouds setget set_clouds
export(Script) var cloud_script
export(Vector3) var area_size setget set_area_size
export(float) var alpha_fade_distance
export(float) var move_speed = 0.5
export(float) var move_damp = 0.99
export(Vector3) var wind_direction = Vector3(0,0,1) setget set_wind_direction
export(Vector3) var cloud_size = Vector3(100,50,100) setget set_cloud_size
export(int) var particles_per_cloud = 32 setget set_particles_per_cloud
export(float) var particle_speed = 1 setget set_particle_speed
export(float) var particle_scale = 250 setget set_particle_scale
export(Color) var color = Color(0.5,0.5,0.5,1) setget set_color
export(float,0,1) var transmission = 1 setget set_transmission
export(float) var proximity_fade = 50 setget set_proximity_fade

func refresh(value):
	refresh = false
	initialize_clouds()
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.restart()

func set_clouds(value):
	if(value >= 1):
		clouds = value
	else:
		clouds = 1
	var children = get_children()
	var skipFirstCloud = false
	for child in children:
		if(child.script == cloud_script):
			if(skipFirstCloud == false):
				skipFirstCloud = true
			else:
				child.free()
	children = get_children()
	for child in children:
		if(child.script == cloud_script):
			var counter = 1
			while(counter < clouds):
				var newCloud = child.duplicate()
				newCloud.process_material = child.process_material.duplicate()
				add_child(newCloud)
				newCloud.set_owner(get_tree().get_edited_scene_root())
				counter+=1
	refresh(true)

func set_area_size(value):
	area_size = value
	if(value.x>value.y):
		if(value.z>value.x):
			alpha_fade_distance = value.z
		else:
			alpha_fade_distance = value.x
	else:
		if(value.z>value.y):
			alpha_fade_distance = value.z
		else:
			alpha_fade_distance = value.y

func set_wind_direction(value):
	wind_direction = value.normalized()

func set_cloud_size(value):
	cloud_size = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.process_material.set_shader_param("emission_box_extents",cloud_size)
			child.restart()

func set_particle_scale(value):
	particle_scale = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.process_material.set_shader_param("scale",particle_scale)

func set_particle_speed(value):
	particle_speed = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.speed_scale = particle_speed

func set_color(value):
	color = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.process_material.set_shader_param("color",color)

func set_transmission(value):
	transmission = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.material_override.set_shader_param("transmission",transmission)

func set_proximity_fade(value):
	proximity_fade = value
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.material_override.set_shader_param("proximity_fade_distance",proximity_fade)

func set_particles_per_cloud(value):
	if(value>1):
		particles_per_cloud = value
	else:
		particles_per_cloud = 1
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			child.amount = particles_per_cloud

func reset_pos(cloud):
	cloud.translation = Vector3((randf()-0.5)*area_size.x,(randf()-0.5)*area_size.y,(randf()-0.5)*area_size.z)
	cloud.translation -= wind_direction*alpha_fade_distance

func initialize_clouds():
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			reset_pos(child)
			child.velocity = wind_direction*move_speed

func _ready():
	initialize_clouds()

func update_cloud(cloud):
	cloud.velocity += wind_direction*move_speed*get_process_delta_time()
	cloud.translation += cloud.velocity
	cloud.velocity *= move_damp
	cloud.set_alpha(1.0-(cloud.translation.distance_to(Vector3.ZERO)/alpha_fade_distance))
	if(cloud.alpha == 0):
		reset_pos(cloud)

func _process(delta):
	var children = get_children()
	for child in children:
		if(child.script == cloud_script):
			update_cloud(child)
