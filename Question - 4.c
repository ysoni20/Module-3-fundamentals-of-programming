#include<stdio.h>
int main(){
	
	//WAP to find simple interest
	
	int p=10000,r=3,t=3,i;
	// t=3 its means 3 year timeperiod
	i=p*r*t/100;
	printf("Your 3 years of simple interest is : %d",i);
	
	return 0;
}
