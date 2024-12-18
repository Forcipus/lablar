#include <stdio.h>

int main (void){

    int counter;
    scanf("%d", &counter);
    int max = (2*counter)-1;
    int maxb = max -1;
    int num0 = 1;

    for (unsigned int num = 1; num <= counter; ++num){
        for (unsigned int num = 1; num <= maxb; ++num){
            printf(" ");
        }
        for (unsigned int num = 1; num <= num0; ++num){
            printf("*");
        }
        printf("\n");
        maxb = maxb - 2;
        num0 = num0 + 2;    
    }
    maxb = maxb + 4;
    num0 = num0 - 4; 
    for (unsigned int num = 1; num <= (counter-1); ++num){
        for (unsigned int num = 1; num <= maxb; ++num){
            printf(" ");
        }
        for (unsigned int num = 1; num <= num0; ++num){
            printf("*");
        }
        printf("\n");
        maxb = maxb + 2;
        num0 = num0 - 2;
    }
}