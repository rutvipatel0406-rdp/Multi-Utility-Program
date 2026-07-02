#include<stdio.h>

int main(){

    int basesalary,hra,da,ta;
    float grosssalary;


    printf("Enter the Base salary:");
    scanf("%d",&basesalary);


    printf("Hra:");
    scanf("%d",&hra);


    printf("Da:");
    scanf("%d",&da);

    printf("Ta:");
    scanf("%d",&ta);

    grosssalary=basesalary+hra+da+ta;

    printf("Gross salary:%.2f",grosssalary);

    return 0;

    
}