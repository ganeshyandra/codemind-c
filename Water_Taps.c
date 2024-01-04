 #include<stdio.h>
 int main()
 {
     double ta,tb;
     scanf("%lf%lf",&ta,&tb);
     double rc=1.0/ta+1.0/tb;
     double tf=1.0/rc;
     printf("%.lf
",tf);
 }