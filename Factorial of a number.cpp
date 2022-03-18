#include<stdio.h>
#include<conio.h>
int main()
{
	int number,factorial=1,i;
	printf("Enter the number :");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		factorial=factorial*i;
	}
	printf("\n The Factorial of the number %d is : %d ",number,factorial);
	getch();
	return 0;
}
