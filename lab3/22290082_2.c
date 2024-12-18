#include <stdio.h>

int main(void){

    int month = 0;
    int day = 0;
    int year = 0;

    int month0 = 10000;
    int day0 = 10000;
    int year0 = 10000;

    puts("\n");
    scanf("%d", &month);
    puts("\n");
    scanf("%d", &day);
    puts("\n");
    scanf("%d", &year);

    while(month !=0 && day != 0 && year !=0){

        puts("\n");
        scanf("%d", &month);
        puts("\n");
        scanf("%d", &day);
        puts("\n");
        scanf("%d", &year);

        if( year <= year0){
            if (month <= month0){
                if (day <= day0){
                    month0 = month;
                    day0 = day;
                    year0 = year;
            }
        }

    }

    printf("%d", month0);
    printf(" ");
    printf("%d", day0);
    printf(" ");
    printf("%d", year0);
    printf(" ");
    printf("en erken tarih");
    }
}

