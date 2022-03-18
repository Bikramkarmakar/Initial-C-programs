#include<stdio.h>
#include<conio.h>
int main()
{
	int number,i,prime=0;
	printf("Enter the Number :  ");
	scanf("%d",&number);
	for(i=2;i<number;i++)
		{
			number%i==0;
		}
		prime=1;
	if(prime==1 && number!=2)													//needs correction
	{
	printf("The Number %d is not prime.",number);
	}
	else
	{
		printf("The Number %d is  prime",number);
	}
	getch();
	return 0;
}
