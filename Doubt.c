#include<stdio.h>
int main()
{
	signed int i=4294967295;
	do
	{
	printf("%d, w\n",i);
	i++;
    }
	while (i>0);
	printf("end");
	
}