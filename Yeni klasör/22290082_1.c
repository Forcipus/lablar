#include <stdio.h>

int check_value(int A[], int valueA);

void delete_element (int A [], int pos);

int main(void){

    int A[10];

    printf("10 elemanlik dizin icin tamsayi degerler giriniz\n");

    for (int i = 0; i < 10; i++)
        scanf("%d", &A[i]);
    
    int valueA;
    int pos;


    while (valueA != -1){
        printf("Silinecek degeri giriniz, bitirmek icin -1\n");
        scanf("%d", &valueA);

        pos = check_value(A, valueA);

        delete_element(A, pos);
    }
}


int check_value(int A[], int valueA){
     

    for (int n = 0; n < 10; ++n){
        if (A[n] == valueA) {
            return  n;
        }
    }
    return -1;
}

void delete_element (int A[], int pos){

    int size = 10;

    if(pos != -1);
        {
        int i;
        for(i = pos; i < size -1; ++i)
            A[i] = A[i+1];


        for(int i = 0; i < size - 1; i++)
            printf("%d ", A[i]);
    
        printf("\n");

        size = size -1;

    if(pos == -1){
        printf("Dizinin elemanlari :\n");
        for(int i = 0; i < size - 1; i++){
            printf("%d ", A[i]);
        }
        printf("\n");
        }
    }

}