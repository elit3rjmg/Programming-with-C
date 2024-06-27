#include <stdio.h>
#include <math.h>

double trigoRatio(double angle) {

    double sine,cosine,tangent;

    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);

    printf("sin(x): %f\ncos(x): %f\ntan(x): %f\n", sine,cosine,tangent);   
}

int main() {
    
    double radian, degree, pi=3.14;

    printf("Input Angle: ");
    scanf("%lf", &radian);
    degree = radian * (180/pi);

    trigoRatio(degree);
    return 0;
}