#include <stdio.h>

int main()
{
    long long n, m;
    long long kmax, kmin, lrover;

    scanf("%lld %lld", &n, &m);

     kmax = n - m + 1;

    kmax = kmax * (kmax - 1) / 2;

     kmin = (n / m) * ((n / m) - 1) / 2;

    if (n % m == 0)
    {
        kmin *= m;
    }
    else
    {
        kmin *= m - (n % m);

         lrover = (n / m) * ((n / m) + 1) / 2;

        kmin += lrover * (n % m);
    }

    printf("%lld %lld ", kmin, kmax);

    return 0;
}