#include <stdio.h>

int maximum(int x, int y, int z);

int main(void){

    int num1 ;
    int num2 ;
    int num3 ;

    printf("%s", "enter three intagers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf("maximum is: %d\n", maximum(num1, num2, num3));
}

int maximum(int x, int y, int z){

    int max = x;

    if (y > max){
        max = y;
    }

    if (z > max){
        max = z;
    }
    return max;
}