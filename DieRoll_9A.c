#include <stdio.h>
#include <stdlib.h>

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int y, w;
    scanf("%d %d", &y, &w);

    // Calculate the probability
    int numerator = 7 - (y > w ? y : w); 
    int denominator = 6; 

    // Simplify the fraction
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;

    printf("%d/%d\n", numerator, denominator);

    return 0;
}
