#include<stdio.h>
#include<conio.h>
int main()
{
	float radius,height,volume;
	printf("Enter The Radius Of The Cylinder :");
	scanf("%f",&radius);
	printf("Enter The height Of The Cylinder :");
	scanf("%f",&height);
	volume=3.14*(radius*radius)*height;
	printf("The Volume Of The Cylinder is : %f ",volume);
	getch();
	return 0;
}
