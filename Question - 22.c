#include<stdio.h>
int main(){
	int i,j,row=6,temp=1;
	for(i=1;i<row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",temp++);
		}
		printf("\n");
	}
	return 0;
}
