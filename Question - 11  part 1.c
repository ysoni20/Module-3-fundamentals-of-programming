//1. WAP to print 972 to 279 using for loop

#include<stdio.h>
int main(){
	
	int no=972,reverse=0,reminder;
	
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("reverse number is : %d",reverse);
	return 0;
}
