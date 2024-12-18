#include <stdio.h>

int main (void){

    int counter;
    scanf("%d", &counter);

    int printer = 1;
    int max = (2*counter)-1;


    for (unsigned int num = 1; num <= counter; ++num){
        for (unsigned int num2 = 1; num2 <= printer; ++num2){
            printf("*");
        }
        printf("\n");
        printer = printer + 2;
    } 
    printer = printer - 4;
    for (unsigned int num = 1; num <= (counter-1); ++num){
        for (unsigned int num2 = printer; num2 >= 1; --num2){
            printf("*");
        }
        printf("\n");
        printer = printer - 2;
    }

}