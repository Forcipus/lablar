#include <stdio.h>

int main(void){
    int size1, size2 ,sizeb, sizek, flag;

    scanf("%d", &size1);
    scanf("%d", &size2);

    if (size1 > size1){
        sizeb = size1;
        sizek = size2;
    }
    else{
        sizeb = size2;
        sizek = size1;
    }

    int array1[size1];
    int array2[size2];
    int array3[sizeb];

    for (int i = 0; i < size1; ++i){
        int a;
        scanf("%d", &a);
        array1[i] = a;
    }
    for (int i = 0; i < size2; ++i){
        int a;
        scanf("%d", &a);
        array2[i] = a;
    }

    int i = 0, j = 0, k = 0, x = 0;

    for(int i = 0; i < sizek; ++i){
        for(int j = 0; j < sizeb; ++j){
            if (array1[i] == array2[j]) {
                flag = 0;
                for (x = 0; x < k; x++) {
                    if (array3[x] == array1[i]) {
                        flag++;
                    }
                }
            if (flag == 0) {
                   
                    array3[k] = array1[i];
                    printf("%d ", array3[k]);
                    k++;    
                }
            }
        }
    }
}