#include<stdio.h>
int main(){
	
	//WAP to find area of circle, rectangle and triangle
	
	//area of rectangle
	int total_area,breadth,length;
	printf("enter length :");
	scanf("%d",&length);
	printf("enter breadth :");
	scanf("%d\n",breadth);
	total_area=length*breadth;
	printf("area of rectangle :%d",total_area);
	
	//area of circle
	float radius,area;
	printf("enter redius :");
	scanf("%f",&radius);
	area=3.14*radius*radius;
	printf("area of circle :%f",area);
	
	//area of triangle
	float base,height;
    printf("Enter Base and Height: ");
    scanf("%f %f",&base,&height);
    area = (base * height) / 2;
    printf("Area of Triangle is %0.2f",area);
	return 0;
	
	
}
