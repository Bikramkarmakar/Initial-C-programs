#include<stdio.h>
#include<conio.h>
int main()
{
	float income,tax;
	printf("Enter Your Income :\n");
	scanf("%f",&income);
	if(income<250000)
	{
		printf("You have to pay no taxes on your income.\n");
	}
	else if(income>=250000 && income<500000)
	{
		printf("You have to pay taxes on your income.\n");
		tax = (((income-250000)*5)/100);
		printf("The Amount of Tax to be paid is : %.2f",tax);                                     // correction needed
	}
	else if(income>=500000 && income<1000000)
	{
		printf("You have to pay taxes on your income.\n");
		tax = (((income-500000)*20)/100);
		printf("The Amount of Tax to be paid is : %.2f",tax);
	}
	else if(income>=1000000)
	{
		printf("You have to pay taxes on your income.\n");
		tax = (((income-1000000)*30)/100);
		printf("The Amount of Tax to be paid is : %.2f",tax);
	}
	getch();
	return 0;
}
