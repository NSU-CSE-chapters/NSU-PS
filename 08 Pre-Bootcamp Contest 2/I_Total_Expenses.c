#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    float   quality, price;
    while (t--)
    {
        scanf("%f%f", &quality, &price);

        
         
         if(quality>1000)
            printf("%.6f\n",  quality*price* 0.9);
        else
            printf("%.6f\n",  quality *  price);



    }

    return 0;
    
}