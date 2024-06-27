#include <stdio.h>

int main() {

    int x1, x2, x3, y1, y2, y3, ab, bc, ac;

    printf("Input (x,y): ");
    scanf("%d %d", &x1, &y1);

    printf("Input (x,y): ");
    scanf("%d %d", &x2, &y2);

    printf("Input (x,y): ");
    scanf("%d %d", &x3, &y3);

    ab = (y2-y1)/(x2-x1);
    bc = (y3-y2)/(x3-x2);
    ac = (y3-y1)/(x3-x1);

    if(ab==bc==ac){
        printf("It is collinear, hence it falls on the same straight line\n");
    } else {
        printf("It doesn't fall in the same straight line\n");
    }
}