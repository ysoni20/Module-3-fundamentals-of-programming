#include<stdio.h>
int main(){
	int i,j,k,n;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++,k++)
		{
			printf("%c ",(char)(k+64));
		}
		printf("\n");
	}
}
