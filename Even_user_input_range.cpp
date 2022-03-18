#include<stdio.h>
#include<conio.h> 
int main()
{
int start,end,i;
printf("Give the First number for the Range :   \n");
scanf("%d",&start);
printf("Give the Final number for the Range :   \n");
scanf("%d",&end);
printf("\n The Even numbers between %d and %d are :\n",start,end); 
    for(i=start; i<=end; i++)
    {
        
		if(i%2 == 0) 
		{
		  printf("%d\t", i);
		}
    }
return 0; 

} 
