#include <stdio.h>

int main(void){

    int size;
    int x = 0, i = 0;

    scanf("%d", &size);

    char arr[size];

    for (int i = 0; i < size; ++i)
        scanf("%c ", &arr[i]);

    while(arr[i] != '\0')  
    {  
  
        if(arr[i] == '('){ 
            ++x;    
        }  
    
        else if(arr[i] == ')'){  
            --x;   
            break;  
        }  
        --i;        
        }  
      
        if(x == 0){  
        printf("Parantezler uyumlu");  
        }  
      
        else{  
        printf("Parantezler uyumlu değil");  
        }  

}  
 




