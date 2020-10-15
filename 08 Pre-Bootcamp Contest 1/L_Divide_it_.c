#include <stdio.h>

int main()
{
   long int t, i;
    scanf("%ld", &t);

    while (t--)
    {
       long long int n;
        scanf("%lld", &n);

         i = 0;
        while (n % 2 == 0)
        {
            n /= 2,
                i++;
        }
        while (n % 3 == 0)
        {
            n /= 3,
                i += 2;
        }
        while (n % 5 == 0)

            n /= 5, i += 3;

        if (n == 1)

            printf("%ld\n", i);

        else

            printf("-1\n");
    }
}