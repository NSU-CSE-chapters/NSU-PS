#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,x,min1=1000000,min2=1000000;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&x);
            if(min1>=x)
            {
                min2=min1;
                min1=x;
            }
            else if(x<min2)
            min2=x;
        }
        printf("%d\n",min1+min2);

        
    }
}