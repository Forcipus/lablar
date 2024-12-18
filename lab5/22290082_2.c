#include <stdio.h>
#include <math.h>

float koordinatlar();
float uzaklik(float X1, float Y1, float X2, float Y2);

int main(void){
    printf("%0.2f", koordinatlar());
}

float koordinatlar(){

    float X1;
    float X2;
    float Y1;
    float Y2;
    float num;

    scanf("%f%f%f%f", &X1, &Y1, &X2, &Y2);
    num = uzaklik(X1,Y1,X2,Y2);
    return num;
}

float uzaklik(float X1, float Y1, float X2, float Y2){
    return sqrt(((X1-X2)*(X1-X2))+((Y1-Y2)*(Y1-Y2)));
}