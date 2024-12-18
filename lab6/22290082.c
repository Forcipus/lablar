#include <stdio.h>

int is_sorted(int array[], int size);

int main (void){

    int num1;

    int size;
    scanf("%d", &size);

    int c[size];

    for (size_t i = 0; i < size; ++i){
        scanf(" %d", &c[i]);
    }

    num1 = is_sorted(c, size);

    if (num1 = 1){
        puts("SORTED");
    }

    if (num1 = 0){
        puts("UNSORTED");
    }
}

int is_sorted(int array[], int size){
    int i;
    for(i=0; i < size-1 ; i++){
        if(array[i] > array[i+1]){
            return 0;
            break;
        }
        else{
            return 1;
        }  
    }


}

