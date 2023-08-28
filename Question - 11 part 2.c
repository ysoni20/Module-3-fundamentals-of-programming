//How many Even numbers are there

#include<stdio.h>
int main(){
	int no,i;
	printf("Enter ending numbers : ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
