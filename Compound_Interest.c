#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,cp;
    scanf("%lf%lf%lf",&p,&r,&t);
    r=r/100;
    cp=p*(pow((1+r),t)-1);
    printf("%.2lf",cp);
    
}