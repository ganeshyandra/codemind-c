 #include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double principal, rate, time, compoundInterest;

    // Input principal, rate, and time
   
    scanf("%lf", &principal);

    
    scanf("%lf", &rate);

 
    scanf("%lf", &time);

    // Convert rate to decimal form
    rate = rate / 100;

    // Calculate compound interest
    compoundInterest = principal * (pow((1 + rate), time) - 1);

    // Display the result
    printf("%.2lf
", compoundInterest);

    return 0;
}