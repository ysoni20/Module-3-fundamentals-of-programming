//WAP to find factorial using recursion

#include<stdio.h>
int main(){
	int number;
	printf("Enter number");
	scanf("%d",&number);
	int result=fact(number);
	printf("%d is your factorial",result);
	return 0;
}
int fact(int a)
{
	if(a>0){
		return a*fact(a-1);
	}
	else{
		return 1;
	}
}
