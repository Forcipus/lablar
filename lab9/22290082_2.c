#include <stdio.h>

int main(void){
    int puanA = 0;
    int puanB = 0;

    char H[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};
    int  P[26] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
 
    char A1[5];
    char B1[5];
    scanf(" %s", &A1);
    scanf(" %s", &B1);

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == A1[i]){
                puanA = puanA + P[n];
            }
        }
    }

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == B1[i]){
                puanB = puanB + P[n];
            }
        }
    }

    char A2[5];
    char B2[5];
    scanf(" %s", &A2);
    scanf(" %s", &B2);

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == A2[i]){
                puanA = puanA + P[n];
            }
        }
    }

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == B2[i]){
                puanB = puanB + P[n];
            }
        }
    }

    char A3[5];
    char B3[5];
    scanf(" %s", &A3);
    scanf(" %s", &B3);

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == A3[i]){
                puanA = puanA + P[n];
            }
        }
    }

    for(int i = 0; i < 5; ++i){
        for(int n = 0; n < 26; ++n){
            if(H[n] == B3[i]){
                puanB = puanB + P[n];
            }
        }
    }

    printf("[%d, %d]\n", puanA + 1, puanB + 1);

    if(puanA > puanB){
        puts("Player A wins");
    }
    if(puanB > puanA){
        puts("Player B wins");
    }
}

