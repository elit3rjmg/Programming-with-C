#include <stdio.h>

int main() {

    int num, r, temp, sum=0;
    num = 121;
    temp = num;

    while(num>0) {

        r = num % 10;
        sum = sum * 10 + r;
        num = num/10;
    }

    printf("%d\n", sum);

    if(temp == sum) {
        printf("It is a palindrom number\n");
    }else {
        printf("It is not a palindrom number\n");
    }
}