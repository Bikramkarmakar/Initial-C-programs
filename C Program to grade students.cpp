#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the Number obtained in the exam : \n");
	scanf("%d",&num);
	if(num<=100 && num>=90)
	{
		printf("Your grade is : A");
	}
	else if(num<90 && num>=80)
	{
		printf("Your grade is : B");
	}
	else if(num<80 && num>=70)
	{
		printf("Your grade is : C");
	}
	else if(num<70 && num>=60)
	{
		printf("Your grade is : D");
	}
	else
	{
		printf("You have Failed in the Exam");
	}
	getch();
	return 0;
}

