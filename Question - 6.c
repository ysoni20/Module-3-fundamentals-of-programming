#include<stdio.h>
int main(){
	
	//WAP to convert years into days and days into years
	
	int year,days;
	
	//days convert in year
	printf("Enter days : ");
	scanf("%d",&days);
	year=days/365;
	printf("years is : %d",year);
	
	//year convert in days
	printf("\nEnter year : ");
	scanf("%d",&year);
	days=year*365;
	printf("days is : %d",days);
	
	return 0;
}
