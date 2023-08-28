//WAP to make addition, Subtraction and multiplication of two matrix using
//2-D Array

//for sub
#include<stdio.h>
int main(){
	int num1[2][2],num2[2][2],result[2][2],j,i;
	printf("ennter 4 values for firdt array\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num1[i][j]);
		}
	}
	printf("ennter 4 values for first array\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&num2[i][j]);
		}
	}
		printf("sub of 2 arrays is stored in array %d\n");
			for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=num1[i][j]-num2[i][j];
		}
		printf("\n");
		
	}
	
		return 0;
}

