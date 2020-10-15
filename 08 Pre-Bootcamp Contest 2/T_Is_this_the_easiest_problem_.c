#include <stdio.h>

int main()
{
   long int t;
    scanf("%ld", &t);

  
      long   int a, b, c;
        int i;

        for ( i = 1; i <= t; i++)
        {
             scanf("%ld%ld%ld", &a, &b, &c);
            if (a + b > c && a + c > b && b + c > a)
            {
                 if (a == b && b == c)
                {
                    printf("Case %d: Equilateral\n", i);
                }
               else if (a == b || b == c || a == c)
                {
                    printf("Case %d: Isosceles\n", i);
                }
                
                else if (a != b || b != c || c != a)
                {
                    printf("Case %d: Scalene\n", i);
                }
            }

            else
            {
                printf("Case %d: Invalid\n", i);
            }
        }
    
    return 0;
}