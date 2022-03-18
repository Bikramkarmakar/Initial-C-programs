/*  C Program to Convert lowercase to uppercase and vice versa  */

#include<stdio.h>
#include<conio.h>
int main()
{
        char ch;
        int i;
        printf("\nEnter any Character: ");
        scanf("%c",&ch);
        printf("\nThe input Character is : %c\n",ch);
        
    
                if(ch>=97 && ch<=122)
                        ch-=32;
                else if (ch>=65 &&ch <=90)
                        ch+=32;
        
        printf("\nThe Converted Character is :  %c \n",ch);
        getch();
        return 0;
}