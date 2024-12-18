#include <stdio.h>

int main(void){
    
    char input;
    int num;

    int satir = 1;
    int kelime = 0;
    int kucuk = 0;
    int buyuk = 0;
    int rakam = 0;

    while ((input = getchar()) != '.'){
        int num = input;
        if(input == '\n'){
            ++satir;
        }
        else if(input == ' '){
            ++kelime;
        }
        else if(97 <= num && num <= 122){
            ++kucuk;
        }
        else if(65 <= num && num <= 90){
            ++buyuk;
        }
        else if(48 <= num && num <= 57){
            ++rakam;
        }
    }
    kelime = kelime + satir;

    printf("%d\n", satir);
    printf("%d\n", kelime);
    printf("%d\n", kucuk);
    printf("%d\n", buyuk);
    printf("%d\n", rakam);
}