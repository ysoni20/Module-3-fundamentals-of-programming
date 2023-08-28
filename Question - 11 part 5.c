//Sum of even numbers

#include<stdio.h>
int main(){
	int i,no,sum=0;
	printf("Enter any number : ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
			sum=sum+i;
		
		}
		
	}
		printf("\n%d is your odd numbers sum",sum);
}
