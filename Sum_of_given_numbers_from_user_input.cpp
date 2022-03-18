//C Program to Calculate the Sum of Natural Numbers Between Range
#include<stdio.h>
#include<conio.h>  
int main()  
{  
    int min,max,sum = 0;  
    printf("Enter the minimum number of the range :\n");  
    scanf("%d",&min);
    printf("Enter the maximum number of the range :\n");  
    scanf("%d",&max);  
     
    while(min <= max)  
    {  
         sum = sum + min;  
         min++;  
    }  
    printf("Sum = %d\n", sum);  
    return 0;  
}  

