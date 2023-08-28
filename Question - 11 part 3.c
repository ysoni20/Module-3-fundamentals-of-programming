//How many odd numbers are there

#include<stdio.h>
int main(){
	int i,end,no;
	printf("Enter any number : ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2!=0)
		{
			printf("\nthese is your odd numbers : %d",i);
		}
	}
}
