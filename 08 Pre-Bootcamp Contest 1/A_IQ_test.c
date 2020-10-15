#include<stdio.h>


int main()
{
    int n,p,first=0,s=0,k,second=0;
    scanf("%d",&n); 
    int a[100];

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
        if(a[i]%2==0)
        {
            first++;
        }
        else{
            second++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(first>second)
        {
            if(a[i]%2!=0)
            {
                k=i;
            }
        }
        else{
            if(a[i]%2==0)
               {
                   k=i;
               }
        }
    }
    printf("%d\n",k);

    return 0;
}