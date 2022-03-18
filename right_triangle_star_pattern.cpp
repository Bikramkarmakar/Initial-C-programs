

#include <stdio.h>
#include<conio.h>

int main()
{
    int i, j, n;

    /* Input number of rows from user */
    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        /* Print i number of stars */
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        /* Move to next line */
        printf("\n");
    }
    getch();
    return 0;
}