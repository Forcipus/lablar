#include <stdio.h>

int mypowfunc(int a, int b);

int main(int argc, char *argv[]){
    
    char * operation;
    int num1, num2;
    operation = argv[1];

    int len = 0;

    while (str[len] != '\0') { 
        len++;
    }

    int num = 0, i = 0, digit;
    for (i = 0; i < len; i++) {

    digit = ing[i] - '0';
    num += digit * mypow(10, (len-1)-i);
    }

    num1 = strtoi(argv[2]);
    num2 = strtoi(argv[3]);

    if(strcmp(operation, "add") == 0){
        printf("%d\n", num1 + num2);
    }
    else if(strcmp(operation, "subtract") == 0){
        printf("%d\n", num1 - num2);
    }
    else if(strcmp(operation, "multiply") == 0){
        printf("%d\n", num1 * num2);
    }
    else if(strcmp(operation, "divide") == 0){
        printf("%d.2f\n", num1 / num2);
    }
    return 0;
}

int mypow(int a, int b) {
   int i=0, ans=1;
   for (i=0; i<b; i++) {
      ans *= a;
   }   
   return ans;
}