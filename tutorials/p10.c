#include <stdio.h>

int main() {

    double i,x,y;
    for(y=1.0; y<=6; y++){
        for(x=5.5; x<= 12.5; x = x+0.5) {
            i = 2+(y+0.5*x);
            printf("i: [%f], y: [%f], x: [%f]\n", i,y,x);
        }
    }
    return 0;
}