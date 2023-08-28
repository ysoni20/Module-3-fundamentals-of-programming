#include<stdio.h>
struct student{
	int rollno;
	char name[100];
	float pr;
};
union student1{
	int rollno;
	char name[100];
	float pr;
};
int main(){
	//diffrence 1: for structure struct keyword is used
	//				for union union keyword is used
	struct student s1;
	s1.rollno=5;
	s1.pr=55;
	//deffrence 2: you cannot access multiple data of union in single printf
	printf("structure:%d is rollno %f is pr",s1.rollno,s1.pr);
	union student1 u1;
	u1.rollno=10;
	printf("\nunion data\n%d is pr",u1.rollno);
	//deffrence 3: you cant modify union data at a same time
	u1.pr=50;
	printf("\nunion data\n%f is pr",u1.pr);
	//diffrence 4: structure store addition of all variables data type4+ float 4+ char
	//				union store maximum size of variable
	printf("\n%d is size of structure",sizeof(s1));
	printf("\n%d is size of union",sizeof(u1));
	return 0;
	
	
}
