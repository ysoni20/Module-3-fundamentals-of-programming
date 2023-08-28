//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main(){
	int n1=0,n2=1,n3=n1+n2,no,i;
	printf("enter end point");
	scanf("%d",&no);
	printf("fibonacci series:%d %d %d",n1,n2,n3);
	for(i=3;i<=no;i++)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf(" %d",n3);
	}
	
}

