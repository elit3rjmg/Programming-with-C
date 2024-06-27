#include <stdio.h>
#include <math.h>

int main() {
    
    double x, a=0, b;

    printf("Input x(float): ");
    scanf("%lf", &x);

    for(double i=2; i<8;i++){
        a = a + pow((1/2)*((x-1)/x), i);
    }
    b = ((x-1)/x) + a; 
    printf("%lf\n", b);
    return 0;
}