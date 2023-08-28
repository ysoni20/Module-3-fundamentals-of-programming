//Write a program of structure for five employee that provides the
//followinginformation -print and display empno, empname, address and age

#include<stdio.h>
struct employee{
	int empno;
	char empname[100];
	char address[100];
	int age;
};
int main(){
	struct employee s1={1,"yash","ahmedabad",23};
	

	printf("%d is empno\n%s is empname\n%s is address\n%d is age",s1.empno,s1.empname,s1.address,s1.age);
	return 0;
}
