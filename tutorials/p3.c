#include <stdio.h>
#include <math.h>

int main() {

    double r, omega, x, y;

    printf("Input (x,y): ");
    scanf("%lf %lf", &x, &y);

    r = sqrt(x*x + y*y);
    omega = atan(y/x);

    printf("Cartesian Co-ordinates: (%f, %f)\n", x, y);
    printf("Polar co-ordinates: (%f, %f)\n", r, omega);
    return 0;
}