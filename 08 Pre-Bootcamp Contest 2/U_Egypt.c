#include <stdio.h>

int main()
{
    long int a, b, c,x,y,z;

    while (scanf("%ld%ld%ld", &a, &b, &c) == 3)
    {
        x= a*a;
        y= b*b;
        z= c*c;

        if (a != 0 && b != 0 && c != 0)
        {
            if (x + y == z || x + z == y || y + z == x)
            {
                printf("right\n");
            }
            else
            {
                printf("wrong\n");
            }
        }

        
    }

    return 0;
}