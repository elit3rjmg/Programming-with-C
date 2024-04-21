#include <stdio.h>
#include <math.h>

int main() {
    
    double l1,l2,g1,g2, D;

    printf("Input Latitude(l1,l2) in radians: ");
    scanf("%lf %lf", &l1, &l2);

    printf("Input longitude(g1,g2) in radians: ");
    scanf("%lf %lf", &g1, &g2);

    D = 3963*acos(sin(l1)*sin(l2)+cos(l1)+cos(l2)*cos(g2-g1));

    printf("Nautical Miles: %f\n", D);
}