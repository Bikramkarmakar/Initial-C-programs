#include<stdio.h>
#include<conio.h>
int main ()
{
	int number=0,i=0;
	printf("Enter the Number of natural numbers to print :");
	scanf("%d",&number);
	while(i<=number)
	{
		printf("%d \n",i);
		i++;
	}
	getch();
	return 0;
	
}
