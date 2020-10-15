#include<stdio.h>
#include<stdlib.h>


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int  main()
{
    int t;
    scanf("%d", &t);
    int arr[t];

    for (int  i = 0; i <t; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    qsort(arr, t, sizeof(int), cmpfunc);

    int yes = 0;
    for (int  i = 2; i <t; i++)
    {
        if (arr[i-1]+arr[i-2]>arr[i])
        {
            yes = 1;
            break;
        }
        
    }

    if (yes==1)
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
    
    
    
return 0;

    
}


