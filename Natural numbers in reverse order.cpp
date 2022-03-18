#include<stdio.h>
#include<conio.h>
int main ()
{
	int number=0,i;
	printf("Enter the Number of natural numbers to print :");
	scanf("%d",&number);
	for(i=number;i>0;i--)
	{
		printf("%d \n",i);
	}
	getch();
	return 0;
	
}
