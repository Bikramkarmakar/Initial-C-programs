#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter The Year :");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0)
	{
		printf("The Year Entered is a Leap Year");
	}
	else if(year%4==0 && year%100==0 && year%400==0)
	{
		printf("The Year Entered is a Leap Year");
	}
		else 
	{
		printf("The Year Entered is not a Leap Year");
	}
	getch();
	return 0;
}
