#include<stdio.h>
 
int main()
{
    int i,j,n;
 
    printf("Enter the no of lines :\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",j+64);
        }
 
        printf("\n");
    }
    return 0;
}