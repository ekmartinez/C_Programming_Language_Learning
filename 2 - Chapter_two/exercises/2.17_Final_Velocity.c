/*
2.17 (Final Velocity) Write a program than asks the user to enter 
the initial velocity and acceleration of an object, and the time 
that has elapsed, places them in the variables u , a, and t, and 
prints the final velocity, v, and distance traversed, s, using the 
following equations.

a) v = u + at
b) s = ut + 1/2(at^2)
*/

#include <stdio.h>

int main(void){

    int initial_velocity;
    int acceleration;
    int time;
    
    printf("-----Final Velocity-----\n");
    
    printf("Enter the initial velocity: ");
    scanf("%d", &initial_velocity);

    printf("Enter the acceleration: ");
    scanf("%d", &acceleration);
    
    printf("Enter the time elapsed: ");
    scanf("%d", &time);
    
    printf("-------------------------\n");

    int final_velocity = initial_velocity + (acceleration * time);
    int distance_traversed = (initial_velocity * time) + (.50 * acceleration * time * time);

    printf("The final velocity is: %d\n", final_velocity);
    printf("The distance traversed is: %d\n", distance_traversed);
    printf("True");

    return 0;
}
