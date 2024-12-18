#include <stdio.h>

void count_digit(int number);

int main (void){

    int number;
    scanf("%d", &number);

    count_digit(number);


}

void count_digit(int number){
    int count[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int frequency[10] = {0};

    while (number > 0){
        int x = number % 10;
        frequency[x] = frequency[x] + 1;
        number = number / 10;
    }
    for (int i = 0; i < 10; ++i){
        printf("%d\t%d\t", count[i], frequency[i]);
        for (int j = 1; j <= frequency[i]; ++j){
            printf("%c", '*');
        }
        puts("\n");
    }
}