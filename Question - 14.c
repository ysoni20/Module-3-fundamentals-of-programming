//WAP to print number in reverse order e.g.: number = 64728 ---> reverse =82746

#include<stdio.h>
int main(){
	
	int no=64728,reverse=0,reminder;
	
	while(no!=0)
	{
		reminder=no%10;
		reverse=(reverse*10)+reminder;
		no=no/10;
	}
	printf("reverse number is : %d",reverse);
	return 0;
}


