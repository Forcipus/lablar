#include <stdio.h>
#include <math.h>

int dortIslem(int say1, int say2, char islem);

int main (void){
    int say1 = 0;
    int say2;
    char islem;

    puts("enter a number:\n");
    scanf("%s",&say1);
    puts("enter calculation:\n");
    scanf(" %d", &islem);
    puts("enter a number:\n");
    scanf("%s",&say2);

    while (islem != '='){
        puts("enter a number:\n");
        scanf("%s",&say1);
        puts("enter calculation:\n");
        scanf(" %d", &islem);

        say1 = dortIslem(say1, say2, islem);
    }

    printf("%d", say1);
}

int dortIslem(int say1, int say2, char islem){
    int sonuc;
    switch (islem){
        case '+':
            return say1 = say1 + say2;
            break;
        
        case '-':
            return say1 = say1 - say2;
            break;

        case '*':
            return say1 = say1 * say2;
            break; 

        case '/':
            return say1 = say1 / say2;
            break; 

        default:
            puts("Beklenmeyen veri girişi\n");
            break;
    }
}