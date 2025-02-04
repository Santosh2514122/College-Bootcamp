#include <stdio.h>
#include <math.h>

int isArmstrong(int num)// Function to check if the number is Armstrong or not
 {
    int sum = 0, temp, remainder, n = 0;
    temp = num;              
    while (temp != 0) // Get the number of digits
    {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }
    return (sum == num);
}
 int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}