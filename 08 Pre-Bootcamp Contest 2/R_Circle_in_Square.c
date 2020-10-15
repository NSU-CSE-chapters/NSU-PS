#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        double r, circleArea, squareArea;
        scanf("%lf", &r);
        circleArea = 2 * acos(0.0) * r * r;
        squareArea = (2 * r) * (2 * r);

        printf("Case %d: %.2lf\n", i, (squareArea - circleArea));
    }
    return 0;
}