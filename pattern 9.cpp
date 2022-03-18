#include<stdio.h>
#include<conio.h>
int main()
{
  printf("The number pattern is:\n");
  int i,j,k=0;
  for(i=0;i<4;i++)
  {
     printf("\n");


     for(j=0;j<4;j++)
      {
             if(i>=j)
                printf("%d ",k++);
         else
                 printf("  ");
         }
    }
getch();
return 0;
}