#include<stdio.h>
int main()
{
    float cp,sp,n;
    scanf("%f%f",&cp,&sp);
    n=(sp-cp)/cp*100;
    printf("%.2f",n);
}