#include <stdio.h>

int compare(char *str1, char *str2);
void sort(char dizi[][20], int size);

int main(void){

    int kez;
    scanf("%d", &kez);

    char dizi[kez][20];
    char value;

    for (int i = 0; i < kez; i++) {
        for (int j = 0; j < 21; j++) {
            scanf("%c", &value);
                    dizi[i][j] = value;
        
    }
}
    for (size_t i = 0; i <= 1; ++i) {
        for (size_t j = 0; j <= 2; ++j) {
            printf("%c ", dizi[i][j]);
        } 
    }
}

