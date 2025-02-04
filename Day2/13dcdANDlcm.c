#include <stdio.h>

// Function to find the GCD of two numbers using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    
    // Take input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Calculate GCD and LCM
    int resultGCD = gcd(num1, num2);
    int resultLCM = lcm(num1, num2);
    
    // Output the results
    printf("GCD of %d and %d is: %d\n", num1, num2, resultGCD);
    printf("LCM of %d and %d is: %d\n", num1, num2, resultLCM);
    
    return 0;
}
