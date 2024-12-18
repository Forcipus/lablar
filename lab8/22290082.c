#include <stdio.h>

int is_anagram();

int main(void){
    int end = is_anagram();
    if (end == 1){
        printf("Stringler anagramdır");
    }
    else{
        printf("Stringler anagram değildir");
    }

}

int is_anagram(){

    int freg1[26] = {0};
    int freg2[26] = {0};

    char str1[20];
    char str2[20];

    scanf("%s", &str1);
    scanf("%s", &str2);

    for (size_t i = 0; i < 20; i++){
        switch (str1[i])
        {
        case 'a':
            ++freg1[0];
            break;
        case 'b':
            ++freg1[1];
            break;
        case 'c':
            ++freg1[2];
            break;
        case 'd':
            ++freg1[3];
            break;
        case 'e':
            ++freg1[4];
            break;
        case 'f':
            ++freg1[5];
            break;       
        case 'g':
            ++freg1[6];
            break;
        case 'h':
            ++freg1[7];
            break;     
        case 'i':
            ++freg1[8];
            break;
        case 'j':
            ++freg1[9];
            break;
        case 'k':
            ++freg1[10];
            break;
        case 'l':
            ++freg1[11];
            break;
        case 'm':
            ++freg1[12];
            break;
        case 'n':
            ++freg1[13];
            break;
        case 'o':
            ++freg1[14];
            break;
        case 'p':
            ++freg1[15];
            break;
        case 'q':
            ++freg1[16];
            break;
        case 'r':
            ++freg1[17];
            break;
        case 's':
            ++freg1[18];
            break;
        case 't':
            ++freg1[19];
            break;
        case 'u':
            ++freg1[20];
            break;
        case 'v':
            ++freg1[21];
            break;
        case 'w':
            ++freg1[22];
            break;
        case 'x':
            ++freg1[23];
            break;
        case 'y':
            ++freg1[24];
            break;
        case 'z':
            ++freg1[25];
            break;
        }
    
    }

    for (size_t i = 0; i < 20; i++){
        switch (str2[i])
        {
        case 'a':
            ++freg2[0];
            break;
        case 'b':
            ++freg2[1];
            break;
        case 'c':
            ++freg2[2];
            break;
        case 'd':
            ++freg2[3];
            break;
        case 'e':
            ++freg2[4];
            break;
        case 'f':
            ++freg2[5];
            break;       
        case 'g':
            ++freg2[6];
            break;
        case 'h':
            ++freg2[7];
            break;     
        case 'i':
            ++freg2[8];
            break;
        case 'j':
            ++freg2[9];
            break;
        case 'k':
            ++freg2[10];
            break;
        case 'l':
            ++freg2[11];
            break;
        case 'm':
            ++freg2[12];
            break;
        case 'n':
            ++freg2[13];
            break;
        case 'o':
            ++freg2[14];
            break;
        case 'p':
            ++freg2[15];
            break;
        case 'q':
            ++freg2[16];
            break;
        case 'r':
            ++freg2[17];
            break;
        case 's':
            ++freg2[18];
            break;
        case 't':
            ++freg2[19];
            break;
        case 'u':
            ++freg2[20];
            break;
        case 'v':
            ++freg2[21];
            break;
        case 'w':
            ++freg2[22];
            break;
        case 'x':
            ++freg2[23];
            break;
        case 'y':
            ++freg2[24];
            break;
        case 'z':
            ++freg2[25];
            break;
        }
    
    }
    if (freg1 == freg2){
        return 1;
    }
    else{
        return 2;
    }
}


