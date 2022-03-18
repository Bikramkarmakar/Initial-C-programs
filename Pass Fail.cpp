#include<stdio.h>
#include<conio.h>
int main()
{
	int Physics,Chemistry,Math,Total,Full_Marks,Total_Marks;
	float Percentage,physics_pass,chemistry_pass,math_pass;
	printf("Enter the Full Marks in each subject : \n ");
	scanf("%d",&Full_Marks);
	Total_Marks=(Full_Marks*3);
	printf("Enter the Marks in Physics : \n ");
	scanf("%d",&Physics);
	printf("Enter the Marks in Chemistry : \n ");
	scanf("%d",&Chemistry);
	printf("Enter the Marks in Math : \n ");
	scanf("%d",&Math);
	Total= Physics+Chemistry+Math;
	Percentage=(100*Total)/Total_Marks;
	physics_pass = (Physics*100)/Full_Marks;
	chemistry_pass = (Chemistry*100)/Full_Marks;
	math_pass = (Math*100)/Full_Marks;
	
	
	if (Percentage>=40 && physics_pass>=33 && chemistry_pass>=33 && math_pass>=33 )
	{
		printf("\nYou have passed the examination.");
	}
	else
	{
		printf("\nYou Have failed the Examination.");
	}
	getch();
	return 0;
}
