#include<stdio.h>
#include<conio.h>
int main()
{
	float Temperature_in_Celsius,Temperature_in_Fahrenheit;
	printf("Enter The Temperature in Celsius : ");
	scanf("%f",&Temperature_in_Celsius);
	Temperature_in_Fahrenheit=((Temperature_in_Celsius*9)/5)+32;
	printf("The Temperature in Fahrenheit : %f",Temperature_in_Fahrenheit);
	getch();
	return 0;
}
