
#include <stdio.h>

int main()

{
    int T, i, d;

    long a;

    scanf("%d", &T);

    while (T--)

    {
        long s = 0;

        scanf("%ld", &a);

        while (a != 0)
        {

            d = a % 10;

            s = s * 10 + d;

            a = a / 10;
        }

        printf("%ld\n", s);
    }
}