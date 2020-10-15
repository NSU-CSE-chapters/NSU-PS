#include<stdio.h>
int main()
{
    int n,sum=0;
    int i, j;
    scanf("%d",&n);
    int x[n][3];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += x[i][j];
        }
        if(sum == 180)
            printf("YES\n");
        else
            printf("NO\n");
        sum = 0;

    }
    return 0;

}
