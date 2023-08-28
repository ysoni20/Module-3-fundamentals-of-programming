#include<stdio.h>

//Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

int main(){
	int a=30,b=50,c;
	
	//addition
	c=a+b;
	printf("Addition is : %d \n",c);
	
	//subtraction
	c=a-b;
	printf("Subtraction is : %d \n",c);
	
	//multiplication
	c=a*b;
	printf("Multiplication is : %d \n",c);
		
	//division
	c=a/b;
	printf("Division is : %d \n",c);
	
	//modulo
	c=a%b;
	printf("Modulo is : %d",c);
	
	return 0;
}
