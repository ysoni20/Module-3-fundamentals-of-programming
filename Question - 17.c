//Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)

#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    lastDigit = number % 10;

    // Find the first digit
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    int sum = firstDigit + lastDigit;
    printf("The sum of the first and last digits of %d is %d\n", number, sum);

    return 0;
}


