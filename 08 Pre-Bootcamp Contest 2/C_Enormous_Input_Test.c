#include<stdio.h>

int main()
{
    int     n,k,t1;
    scanf("%d%d", &n, &k);
    int count=0;

    while (n--)
    {
        scanf("%d", &t1);

        if (t1%k==0)
        {
            count++;
        }
       

    }
     
    printf("%d\n", count);
}