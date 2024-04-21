#include <stdio.h>

int main() {
    double f, c;

    printf("Enter Temp in Farenhiet: ");
    scanf("%lf", &f);

    c = (f - 32) * 5/9;

    printf("Temp in Celcius: %f\n", c);
    return 0;
}