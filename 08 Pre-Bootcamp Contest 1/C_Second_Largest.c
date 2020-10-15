#include <stdio.h>
int main()
{
    int T, i;
    int A, B, C;

    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%d%d%d", &A, &B, &C);

        if (A > B && B > C || B > A && C > B)
        {
            printf("%d\n", B);
        }

        if (A > C && C > B || C > A && B > C)
        {
            printf("%d\n", C);
        }

        if (C > A && A > B || A > C && B > A)
        {
            printf("%d\n", A);
        }
    }
    return 0;
}
