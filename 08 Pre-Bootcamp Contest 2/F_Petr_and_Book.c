#include <stdio.h>

int main()
{
    int n, arr[7];
    scanf("%d", &n);
    int t, i = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }
    t = arr[0];
    while (t < n)
    {
        i++;
        i = i % 7;
        t = t + arr[i];
    }

    printf("%d\n", i + 1);
}
