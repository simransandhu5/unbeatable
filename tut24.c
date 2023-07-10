#include<stdio.h>

int main(){
    float inch ,meter;

    printf("enter the length in inch");
    scanf("%f",&inch);

    meter=inch*0.0254;

    printf("%f inch is %f meter\n",inch,meter);
}