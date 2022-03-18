#include<stdio.h>
#include<conio.h>
int main()
{
	int number,multiplication_table_upto,i,result=0;
	printf("Enter the Number: \n");
	scanf("%d",&number);
	printf("multiplication_table_upto: \n");
	scanf("%d",&multiplication_table_upto);
	for(i=multiplication_table_upto;i>0;i--)
	{
		result=number*i;
		printf(" %d * %d = %d  \n",number,i,result);
	}
	getch();
	return 0;
}
