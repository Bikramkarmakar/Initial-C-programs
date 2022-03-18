#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1;
	b=0;   // b variable data type is not declared so invalid 
	b=a;
	printf("%d\n",b);
	int v = 3^3; // statement is valid but does not return 9 as expected
	printf("%d\n",v);
	char dt = '21Dec2020'; // overflow, cannot write so many charcters only one so invalid
	printf("%c\n",dt);
}
