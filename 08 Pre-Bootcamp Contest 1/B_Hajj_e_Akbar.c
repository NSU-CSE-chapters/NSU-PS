#include <stdio.h>
#include <string.h>
int main()
{
    int i = 1;
    char temp[100];
    while (scanf("%s", temp) != EOF)
    {
        if (temp[0] != '*')
        {
            if (strcmp(temp, "Hajj") == 0)
            {
                printf("Case %d: Hajj-e-Akbar\n", i);
            }
            else if (strcmp(temp, "Umrah") == 0)
            {
                printf("Case %d: Hajj-e-Asghar\n", i);
            }
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}