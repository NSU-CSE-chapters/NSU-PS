#include<stdio.h>


int main(void){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = a + b;
    int aa = sum / 2;
    if (sum % 2 == 0)
    {
        printf("YES\np is already sorted in ascending order, so no operation is needed.\n");
    }else
    {
        printf("NO\nIn this case, swapping any two elements does not sort p in ascending order.\n");
    }
    
    
    return 0;
}