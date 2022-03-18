#include<stdio.h>
#include<conio.h>
int main()
{
	int rating;
	printf("Enter Your Rating : \n");
	scanf("%d",&rating);
	switch(rating)
	{
	
	case 1 :
		printf("Your Rating is 1 Stars");
		break;
	case 2 :
		printf("Your Rating is 2 Stars");
		break;
	case 3 :
		printf("Your Rating is 3 Stars");
		break;
	case 4 :
		printf("Your Rating is 4 Stars");
		break;
	case 5 :
		printf("Your Rating is 5 Stars");
		break;
	default :
		printf("Your Rating is invalid please try again");
		break;
	}
		
}
