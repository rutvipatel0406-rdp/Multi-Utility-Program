#include<stdio.h>

int main(){

    float angle1,angle2,total,angle;
    const float fix=180;

    printf("First  angle :");
    scanf("%f",&angle1);

    printf("Second angle :");
    scanf("%f",&angle2);

    total=angle1+angle2;
    angle=fix-total;

    printf("Third angle:%.2f",angle);

    return 0;

}