#include<stdio.h>
#include<conio.h>
int main()
{
	int number,sum=0,i;
	printf("Enter the number of natural numbers to add : \n");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		sum=sum+i;
	}
	printf("The sum of the first %d natural numbers is : %d \n",number,sum);
	getch();
	return 0;
}
