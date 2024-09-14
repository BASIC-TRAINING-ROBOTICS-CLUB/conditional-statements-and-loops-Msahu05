#include <stdio.h>
#include <math.h>

// Function and parameters
void compute_trajectory(double velocity, double angle_degrees, double time);

#define GRAVITY 9.81 // defining gravity 

int main() {
    double velocity, angle;
    double time;

 // Input
    printf("Enter the initial velocity (m/s): ");
    scanf("%lf", &velocity);
    printf("Enter the angle of projection (degrees): ");
    scanf("%lf", &angle);
    printf("Enter the time (seconds): ");
    scanf("%lf", &time);

 // Display trajectory
    compute_trajectory(velocity, angle, time);

    return 0;
}

// Function to display horizontal and vertical positions
void compute_trajectory(double velocity, double angle_degrees, double time) {
    double angle_radians = angle_degrees * M_PI / 180.0;
    double x = velocity * cos(angle_radians) * time;
    double y = (velocity * sin(angle_radians) * time) - (0.5 * GRAVITY * time * time);
    double z = x * tan(angle_radians) - (GRAVITY/2 * (velocity * velocity * cos(angle_radians) * 2 * 2));

    printf("\n\nAt time %.2f seconds:\n", time);
    printf("Horizontal Position (x): %.2f meters\n", x);
    printf("Vertical Position (y): %.2f meters\n", y);
    printf("Trajectory %.2f:", z);
}