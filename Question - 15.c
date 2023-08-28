//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include <stdio.h>


int findMaxDigit(int number) {
    if (number < 0) {
        number = -number; 
    }

    int maxDigit = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    return maxDigit;
}

int main() {
    int inputNumber;
    
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    
    int maxDigit = findMaxDigit(inputNumber);
    printf("The maximum digit in the number %d is %d\n", inputNumber, maxDigit);

    return 0;
}

