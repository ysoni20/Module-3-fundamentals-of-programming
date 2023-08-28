//Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>


int Digits(int number) {
    int sum = 0;
    
    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    
    return sum;
}

int main() {
    int inputNumber;
    
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    
    int sum = Digits(inputNumber);
    printf("The sum of the digits of %d is %d\n", inputNumber, sum);

    return 0;
}

