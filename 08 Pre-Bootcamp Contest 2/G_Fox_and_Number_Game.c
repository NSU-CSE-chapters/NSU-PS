#include <stdio.h>
int n, arr[1100], m;
int gcd(int a, int b);

int main()

{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 1)
    {
        printf("%d", arr[1]);
        return 0;
    }

    int m = arr[1];

    for (int i = 2; i <= n; i++)
    {
        m = gcd(m, arr[i]);
    }

    printf("%d\n", m * n);

    return 0;

}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}