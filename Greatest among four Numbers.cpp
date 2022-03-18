#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	int largest;
	printf("Enter first Number : \n");
	scanf("%d",&a);
	printf("Enter second Number : \n");
	scanf("%d",&b);
	printf("Enter third Number : \n");
	scanf("%d",&c);
	printf("Enter fourth Number : \n");
	scanf("%d",&d);
	if (a>b && a>c && a>d)
	{
		largest=a;
		printf("The Number %d is the the largest\n ",largest);
	}
		if (b>a && b>c && b>d)
	{
		largest=b;
		printf("The Number %d is the the largest\n ",largest);
	}
		if (c>a && c>b && c>d)
	{
		largest=c;
		printf("The Number %d is the the largest\n ",largest);
	}
	else
	{
		largest=d;
		printf("The Number %d is the the largest\n ",largest);
	}
	getch();
	return 0;
}
