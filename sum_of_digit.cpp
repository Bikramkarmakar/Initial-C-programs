#include<stdio.h>
#include<conio.h>
int main ()
{
    int n,s=0,r,a;
    printf("Enter the Number :");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("\n Sum of the digits of %d is %d",a,s);
    getch();
    return 0;
}