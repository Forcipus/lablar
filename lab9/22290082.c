#include <stdio.h>

void get_input(int size, char my_array[]);
void erase_non_digit( int size, int my_new_size, char my_array[], int my_new_array[]);
int rule_1(int size, int A[]);
int rule_2(int size, int A[]);
int rule_3(int size, int A[]);

int main(void){
    int size = 20;
    char my_array[size + 1];

    get_input(size, my_array);
    erase_non_digit(int size, int my_new_size, char my_array[], int my_new_array[]);
    num0 = rule_1(int my_new_size, int my_new_array[]);

    if(num0 = 0){
        
    }

}

void get_input(int size, char my_array[]){
    scanf("%21s", my_array);
    printf("%s\n", my_array);
}

void erase_non_digit(int size, int my_new_size, char my_array[], int my_new_array[]){
    int my_new_size = 0;
    for(size_t i = 0, i < size; ++i){
        if(my_array[i] == {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',}){
            ++my_new_size;
        }
    }
    int counter = 0;
    int my_new_array[my_new_size + 1];
    for(size_t i = 0, i < size; ++i){
        if(my_array[i] == {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',}){
            my_new_array[counter] = my_array[i];
            ++counter
        }
    }
}

int rule_1(int size, int A[]){
    if(int size = 11){
        return 1;
    }
    else{
        return 0;
    }
}

int rule_2(int size, int A[]){
    int add = (A[0]+A[2]+A[4]+A[6]+A[8])*7;
    int min = (A[1]+A[3]+A[5]+A[7]);
    int num1 = (add - min)%10;

    if(num1 == A[9]){
        return 1;
    }
    else{
        return 0;
    }
}

int rule_3(int size, int A[]){
    int num2 = (A[0]+A[1]+A[2]+A[3]+A[4]+A[5]+A[6]+A[7]+A[8]+A[9])%10;
 
    if(num2 == A[10]){
        return 1;
    }
    else{
        return 0;
    }
}

