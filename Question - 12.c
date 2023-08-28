//WAP to print factorial of given number

#include<stdio.h>
int main(){
	int i,no,fact;
	printf("Enter any number : ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("Factorial is : %d",fact);
}
