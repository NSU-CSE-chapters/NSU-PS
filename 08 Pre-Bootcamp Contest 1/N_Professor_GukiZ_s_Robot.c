#include <stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
    int x1, y1, x2, y2, x = 0, y = 0;
    int ans;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x = abs(x1 - x2);//4
    y = abs(y1 - y2);//5
    ans = (x >= y) ? x : y;
    printf("%d\n", ans);
}