#include<stdio.h>
#include<math.h>

int main()
{
   long int n,arr[10000], i,a,b;

   int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
   while (scanf("%ld", &n))
   {
       arr[i++]=n;
          qsort(arr, n, sizeof(int), cmpfunc);


   }
   



}