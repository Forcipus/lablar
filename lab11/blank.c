#include <stdio.h>

int main(void){
    
    char input;

    int satir = 1;
    int kelime = 0;
    int kucuk = 0;
    int buyuk = 0;
    int rakam = 0;

    while ((input = getchar()) != '.'){
        if(input == '\n'){
            ++satir;
        }
        else if(input == ' '){
            ++kelime;
        }
        else if('a' <= input && input <= 'z'){
            ++kucuk;
        }
        else if('A' <= input && input <= 'Z'){
            ++buyuk;
        }
        else if('0' <= input && input <= '9'){
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