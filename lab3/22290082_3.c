#include <stdio.h>

int main(void){

    int day = 0;
    int start = 0;
    int counter = 0;

    puts("\n");
    scanf("%d", &day);

    puts("\n");
    scanf("%d", &start);

    printf("Aydaki gün sayısını yazınız: %d\n", day);
    printf("Ayın başlangıç gününü yazınız (1= Mon, 7=Sun): %d\n", start);

    for(unsigned int x = 1; x <= (start-1); ++x){
        printf(" ");
        counter = counter + 1;
        if((counter%14) == 0){
            printf("\n");
            }

        printf(" ");
        counter = counter + 1;
        if((counter%14) == 0){
            printf("\n");
            }
    }

    for(unsigned int x = 1; x <= day; ++x){
        printf("%d", x);
        counter = counter + 1;
        if((counter%14) == 0){
            printf("\n");
            }

        printf(" ");
        counter = counter + 1;
        if((counter%14) == 0){
            printf("\n");
            }
        }

}
