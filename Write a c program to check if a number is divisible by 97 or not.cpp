#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter The value of a : ");
	scanf("%d",&a);
	if(a%97==0)
	{
		printf("The Number %d is divisible by 97\n",a);
		b=a/97;
		printf("The Divided number is %d",b);
	}
	else
	{
		printf("The Number %d is not divisible by 97",a);
	}
	getch();
	return 0;
}
