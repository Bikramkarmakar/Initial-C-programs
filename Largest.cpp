#include<stdio.h>
#include<conio.h>

int main()
{
    
    int n,i,c,big;
    

    printf("\nEnter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\nEnter %d numbers :\n", n);

    printf("\n\n\t\tElement 1  : ");
    scanf("%d", &big);

    for(i = 2; i <= n; i++)
    {
        printf("\n\t\tElement %d  : ", i);
        scanf("%d", &c);
        
        if(big < c)  
            big = c;    
    }

    printf("\nThe largest of the %d numbers is  %d ", n, big);
    getch();
    return 0;
}
