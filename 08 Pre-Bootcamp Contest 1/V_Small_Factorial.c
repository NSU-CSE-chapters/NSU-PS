#include <stdio.h>

int factorial(int N);

int main()
{
    int T;
    scanf("%d", &T);
    while(T--)
    {
       int N;
       scanf("%d", &N);
       printf("%d\n", factorial(N));
    }
    return 0;
}

int  factorial(int N)
{
    if(N <= 1)
        return 1;
    else
        return N * factorial(N-1);
}