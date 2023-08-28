#include<stdio.h>
int main(){
	
	//WAP to check if the given year is a leap year or not
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
	if(year%4==0){
		printf("leap year");
	}
	else{
		printf("not a leap year");
	}
	return 0;
	
}
