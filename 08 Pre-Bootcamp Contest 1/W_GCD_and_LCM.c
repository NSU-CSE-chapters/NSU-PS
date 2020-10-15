#include <stdio.h>

int main(void) {
    
   long int  gcd, lcm, rem, num, den;
    long int num1,num2;
  int t;
   scanf("%d",&t);
   while(t--){
    scanf("%ld %ld", &num1, &num2);
    if (num1 > num2)
    {
        num = num1;
        den = num2;
    }
    else
    {
        num = num2;
        den = num1;
    }
    rem = num % den;
    while (rem != 0)
    {
        num   = den;
        den = rem;
        rem   = num % den;
    }
    gcd = den;
    lcm = num1 * num2 / gcd;
    printf("%ld %ld\n", gcd,lcm);
    
}
	return 0;
}
