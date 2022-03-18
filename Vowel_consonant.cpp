#include <stdio.h>
#include<conio.h>
int main()
 {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
      if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || 
       c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    {
        printf("'%c' is Vowel.", c);
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        
        printf("'%c' is Consonant.", c);
    }
    else 
    {
        printf("'%c' is not an alphabet.", c);
    }

    getch();
    return 0;
}
