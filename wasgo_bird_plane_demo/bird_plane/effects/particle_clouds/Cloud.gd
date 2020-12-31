tool
extends Particles

var velocity = Vector3.ZERO
var alpha = 1 setget set_alpha

func set_alpha(value):
	alpha = clamp(value,0,1)
	process_material.set_shader_param("alpha",alpha)
