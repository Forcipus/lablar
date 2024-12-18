#include <stdio.h>
#include <math.h>

void dortIslem(int say1, int say2, char islem);

int toplama(int say1, int say2);
int cikarma(int say1, int say2);
int carpma(int say1, int say2);
int bolme(int say1, int say2);
int print_message(int say1, char islem, int say2, int sonuc);

int main(void){
    int say1;
    int say2;
    char islem;
    scanf("%d%d", &say1, &say2);  
    scanf(" %c", &islem);

    dortIslem(say1, say2, islem);
}

void dortIslem(int say1, int say2, char islem){
    int sonuc;
    switch (islem){
        case '+':
            sonuc = toplama(say1, say2);
            print_message(say1,islem,say2,sonuc);
            break;
        
        case '-':
            sonuc = cikarma(say1, say2);
            print_message(say1,islem,say2,sonuc);
            break;

        case '*':
            sonuc = carpma(say1, say2);
            print_message(say1,islem,say2,sonuc);
            break; 

        case '/':
            sonuc = bolme(say1, say2);
            print_message(say1,islem,say2,sonuc);
            break; 

        default:
            puts("Beklenmeyen veri girişi\n");
            break;
    }
}

int toplama(int say1, int say2){
    return say1 + say2;
}
int cikarma(int say1, int say2){
    return say1 - say2;
}
int carpma(int say1, int say2){
    return say1 * say2;
}
int bolme(int say1, int say2){
    if (say2 == 0){
        return -987654321;
    }
    else{
        return say1 / say2;
    }
}
int print_message(int say1,char islem,int say2,int sonuc){
    if (sonuc == -987654321){
        puts("Payda 0 olduğundan bölme işlemi yapılamaz");
    }
    else{
        printf("%d%c%d=%d", say1, islem, say2, sonuc);
    }
}