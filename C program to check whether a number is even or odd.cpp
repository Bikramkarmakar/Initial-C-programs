//Q.1 C Program to Check Whether A number is Even or Odd
#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("The Number %d is Even",a);
	}
	else
	{
		printf("The Number %d is odd",a);
	}
	getch();
	return 0;
}
