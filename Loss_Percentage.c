#include<stdio.h>
int main()
{
    float cp,sp,n;
    scanf("%f%f",&cp,&sp);
    n=(cp-sp)/cp*100;
    printf("%.2f",n);
}