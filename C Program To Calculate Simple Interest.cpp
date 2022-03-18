#include<stdio.h>
#include<conio.h>
int main()
{
	float p,t,r,interest;
	printf("Enter The Principle Amount : ");
	scanf("%f",&p);
	printf("Enter The time  : ");
	scanf("%f",&t);
	printf("Enter The interest rate : ");
	scanf("%f",&r);
	interest=(p*t*r)/100;
	printf("The Simple Interest is : %f",interest);
	getch();
	return 0;
}
