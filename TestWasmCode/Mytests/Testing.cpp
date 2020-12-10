
#include "wasgo\wasgo.h"
#include <stdio.h>
#include <stdlib.h>
#include "Spatial.h"
#include "Transform.h"

#define GRAVITY 10
#define THRUST 15
#define PI 3.14159

float velocity = 10.0;

void _unhandled_key_input(InputEventKey p_key_event){
    printf("hello\n");
    p_key_event.as_text();
/*    switch(*key)
    {
        case 'W':   printf("w\n");            //maybe go up
                    break;
        case 'S':   printf("s\n");              //maybe go down
                    break;
        case 'A':   printf("a\n");              //go left
                    break;
        case 'D':   printf("d\n");              //go right
                    break;
        case 'J':   printf("j\n");              //speed up
                    break;
        case 'K':   printf("k\n");              //speed down
                    break;
    }
*/	
}

/*float gravity_formulat(float )
{
    return 
}*/

void _physics_process(float delta)
{ 
    float y_ang;
    Spatial plane;
    Vector3 direction, target_vector;
    Transform t;
    float target_speed;

    Node this_node = WasGo::this_node();
 	Variant path = WasGo::get_property_nodepath("other_node");
    plane = (Spatial)this_node.get_node(path);

    Basis b = plane.get_transform().get_basis();
    direction = b.get_axis(2);
    y_ang = direction.angle_to(Vector3(0,1,0));
    target_speed = THRUST + (y_ang/PI) * GRAVITY;
    target_vector = Vector3(0, 0, velocity).linear_interpolate(Vector3(0, 0, target_speed), 0.1);
    t = plane.get_transform();
    t.translate(target_vector * delta);
    plane.set_transform(t);
}