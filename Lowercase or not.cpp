#include<stdio.h>
#include<conio.h>
int main()
{
	char alphabet;
	printf("Enter The Alphabet:\n");
	scanf("%c",&alphabet);
	if (alphabet>=65 && alphabet<=90)
	{
		printf("The alphabet %c is in uppercase.",alphabet);
	}
	else if(alphabet>=97 && alphabet<=122)
	{
		printf("The alphabet %c is in lowercase",alphabet);
	}
	getch();
	return 0;
}
