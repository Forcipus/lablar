#include <stdio.h>

int main(void){

    int kalkis = 0;
    int varis = 0;

    int kalkis1 = 490;
    int varis1 = 616;

    int kalkis2 = 583;
    int varis2 = 712;

    int kalkis3 = 679;
    int varis3 = 91;

    int kalkis4 = 767;
    int varis4 = 910;

    int kalkis5 = 850;
    int varis5 = 857;

    int kalkis6 = 945;
    int varis6 = 1075;

    int kalkis7 = 1150;
    int varis7 = 1280;

    int kalkis8 = 1305;
    int varis8 = 1438;

    int saat = 0;
    int dk = 0;
    int zaman = 0;

    int return1 = 0;
    int return2 = 0;

    int flag1 = 0;
    int flag2 = 0;

    puts("\n");
    scanf("%d", &saat);

    puts("\n");
    scanf("%d", &dk);

    saat = saat*60;
    zaman = saat + dk;

    printf("%d\n", saat);
    printf("%d\n", dk);
    printf("%d\n", zaman);

///

    return1 = kalkis1 - zaman;
    flag1 = kalkis1;
    if (return1 < 0){
        return1 = return1 *-1;
    }

    kalkis = kalkis2 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis2;
    }

    kalkis = kalkis3 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis3;
    }

    kalkis = kalkis4 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis3;
    }

    kalkis = kalkis5 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis5;
    }

    kalkis = kalkis6 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis6;
    }

    kalkis = kalkis7 - zaman;
    if (kalkis < 0){
        kalkis = kalkis * -1;
    }
    if (kalkis < return1){
        return1 = kalkis;
        flag1 = kalkis7;
    }

    kalkis = kalkis8 - zaman;
    if (kalkis8 < 0){
        kalkis8 = kalkis8 * -1;
    }
    if (kalkis8 < return1){
        return1 = kalkis8;
        flag1 = kalkis8;
    }

///

    return2 = varis1 - zaman;
    flag2 = varis1;
    if (return2 < 0){
        return2 = return2 *-1;
    }

    varis2 = varis2 - zaman;
    if (varis2 < 0){
        varis2 = varis2 * -1;
    }
    if (varis2 < return2){
        return2 = varis2;
        flag2 = varis2;
    }

    varis3 = varis3 - zaman;
    if (varis3 < 0){
        varis3 = varis3 * -1;
    }
    if (varis3 < return2){
        return2 = varis3;
        flag2 = varis3;
    }
    
    varis4 = varis4 - zaman;
    if (varis4 < 0){
        varis4 = varis4 * -1;
    }
    if (varis4 < return2){
        return2 = varis4;
        flag2 = varis4;
    }
    
    varis5 = varis5 - zaman;
    if (varis5 < 0){
        varis5 = varis5 * -1;
    }
    if (varis5 < return2){
        return2 = varis5;
        flag2 = varis5;
    }
    
    varis6 = varis6 - zaman;
    if (varis6 < 0){
        varis6 = varis6 * -1;
    }
    if (varis6 < return2){
        return2 = varis6;
        flag2 = varis6;
    }
    
    varis7 = varis7 - zaman;
    if (varis7 < 0){
        varis7 = varis7 * -1;
    }
    if (varis7 < return2){
        return2 = varis7;
        flag2 = varis7;
    }
    
    varis8 = varis8 - zaman;
    if (varis8 < 0){
        varis8 = varis8 * -1;
    }
    if (varis8 < return2){
        return2 = varis8;
        flag2 = varis8;
    }

    printf("%d\n", flag1);
    printf("%d\n", flag2);

    printf("Saati giriniz: ");
    printf("%d", saat/60);
    printf(":");
    printf("%d\n", dk);

    printf("En yakın kalkış: ");
    printf("%d", flag1 / 60);
    printf(":");
    printf("%d", flag1 % 60);
    printf(" varış ");
    printf("%d", flag2 / 60);
    printf(":");
    printf("%d\n", flag2 % 60);

}
