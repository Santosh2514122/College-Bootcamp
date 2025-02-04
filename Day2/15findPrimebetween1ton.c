#include <stdio.h>
int main() {
    int n, i, j, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers between 1 and %d are:\n", n);
    for (i = 2; i <= n; i++)// Loop through all numbers from 2 to n 
    {
        isPrime = 1; // Assume i is prime
        for (j = 2; j <= i / 2; j++) // Check if i is divisible by any number from 2 to i-1
        {
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }
        if (isPrime)   // If isPrime is still 1, then i is prime

         {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
