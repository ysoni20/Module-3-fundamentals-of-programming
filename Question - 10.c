#include<stdio.h>
int main(){
	
	/*WAP to show
		1. Monday to Sunday using switch case
		2. Vowel or Consonant using switch case*/
		
//	int day;
//	printf("Enter any dat between 1-7 : ");
//	scanf("%d",&day);
//	
//	switch(day)
//	{
//		case 1:printf("Monday");
//			break;
//			
//		case 2:printf("Tuesday");
//			break;
//			
//		case 3:printf("Wednesday");
//			break;
//			
//		case 4:printf("Thursday");
//			break;
//			
//		case 5:printf("Fryday");
//			break;
//			
//		case 6:printf("Saturday");
//			break;
//			
//		case 7:printf("Sunday");
//			break;
//			default:printf("Invalid day");
//	}
//	
	
	
	//2. Vowel or Consonant using switch case
	
	char ch;
	printf("\nEnter eny character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case'a':printf("Vowel");
				break;
				
		case'e':printf("Vowel");
				break;
				
		case'i':printf("Vowel");
				break;
				
		case'o':printf("Vowel");
				break;
				
		case'u':printf("Vowel");
				break;
				default:printf("Constant");
	}
	return 0;
}
