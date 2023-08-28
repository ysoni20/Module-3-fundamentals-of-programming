#include<stdio.h>
int main(){
	
	//WAP to find number is even or odd using ternary operator
	
	int number;
	printf("Enter number to chech given number is odd or even : ");
	scanf("%d",&number);
	(number%2==0)?printf("even number"):printf("\nodd number");
}
