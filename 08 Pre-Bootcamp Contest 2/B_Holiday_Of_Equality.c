#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n;
    int max = 0, sum = 0;
    for (int i = 1; i <= t; i++)
    {

        scanf("%d", &n);

        if (n > max)
        {
            max = n;
            sum = sum + n;
        }
    }

    printf("%d\n", t * max - sum);
}