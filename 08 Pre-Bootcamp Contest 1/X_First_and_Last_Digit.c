#include <stdio.h>

int main()
{
    int num, sum=0, firstDigit, lastDigit,t;
    scanf("%d", &t);


    while (t--)
    {
         scanf("%d", &num);
    
    lastDigit = num % 10;
    

    firstDigit = num;

    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;


    sum = firstDigit + lastDigit; 

    printf("%d\n", sum);

    
    }
    return 0;

   
}