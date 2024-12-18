#include <stdio.h>

int main(void){
    
    char input;
    int num;

    char text1[100];

    int satir = 1;
    int kelime = 0;
    int kucuk = 0;
    int buyuk = 0;
    int rakam = 0;

    scanf("%s", text1);
    FILE *dosya = fopen(text1, "r");

    while ((input = fgetc(dosya)) != '.'){
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