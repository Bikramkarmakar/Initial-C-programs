#include<stdio.h>
#include<conio.h>
int main()
{
	int Length,Breadth;
	float Area;
	printf("Enter The Length Of the Rectangle : ");
	scanf("%d",&Length);
	printf("Enter The Breadth Of the Rectangle : ");
	scanf("%d",&Breadth);
	Area=Length*Breadth;
	printf("The Area Of the Rectangle is : %f ",Area);
	getch();
	return 0;
}
