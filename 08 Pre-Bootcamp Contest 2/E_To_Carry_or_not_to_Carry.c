#include <stdio.h>
int main()
{
    int unsigned long a, b;

    while (scanf("%lu %lu", &a, &b) == 2)
    {
        printf("%lu\n", a ^ b);
    }
    return 0;
}