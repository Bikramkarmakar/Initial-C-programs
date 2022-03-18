#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,Addition,Subtraction,Division,Multiplication;
	printf("Enter The First Number:");
	scanf("%f",&a);
	printf("Enter The Second Number :");
	scanf("%f",&b);
	Addition=a+b;
	if(a>b)
	{
		Subtraction=a-b;	
	}
	else
	{
		Subtraction=b-a;
	}
		if(a>b)
	{
		Division=a/b;	
	}
	else
	{
		Division=b/a;
	}
	Multiplication=a*b;
	printf("Addition Of %.2f and %.2f = %.2f\n",a,b,Addition);
	printf("Subtraction Of %.2f and %.2f = %.2f\n",a,b,Subtraction);
	printf("Division Of %.2f and %.2f = %.2f\n",a,b,Division);
	printf("Multiplication Of %.2f and %.2f = %.2f\n",a,b,Multiplication);
	getch();
	return 0;	
}
