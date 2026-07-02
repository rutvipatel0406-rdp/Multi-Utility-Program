#include<stdio.h>

int main(){

    float celsius,fahrenheit;

    printf("enter the value in celsius:");
    scanf("%f",&celsius);

    fahrenheit=(celsius*9/5)+32;

    printf("converted temperature:%.2f",fahrenheit);
    return 0;
}