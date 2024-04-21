#include <stdio.h>
#include <math.h>

int main() {

    double wcf, t, va, v;
    
    printf("Enter temp: ");
    scanf("%lf", &t);
    
    printf("Enter velocity of air: ");
    scanf("%lf", &va);

    v = pow(va, 0.16);
    wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75)*v;
    
    printf("Wind-Chill factor: %d\n", wcf);
    return 0;
}