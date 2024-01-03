  #include <stdio.h>

int main() {
    // Define variables for the time taken by Tap A and Tap B
    double timeTapA, timeTapB;

    // Ask the user to input the time taken by Tap A and Tap B to fill the tank
    
    scanf("%lf", &timeTapA);

    
    scanf("%lf", &timeTapB);

    // Calculate the combined rate when both taps are working together
    double rateCombined = 1.0 / timeTapA + 1.0 / timeTapB;

    // Calculate the time to fill the tank
    double timeToFill = 1.0 / rateCombined;

    // Display the result
    printf("%.f
", timeToFill);

    return 0;
}