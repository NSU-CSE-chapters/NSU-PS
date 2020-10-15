#include<stdio.h>
 
int main(){
 
long ans=0;
int N;
scanf("%d",&N);
 
int A[N+1];
int B[N];
 
for (int i = 0; i < N+1; i++){scanf("%d",&A[i]);}
for (int i = 0; i < N; i++){scanf("%d",&B[i]);}
 
for (int i = N; i > 0; i--)
{
  if (B[i-1]-A[i]<=0)
  {
    ans += B[i-1];
  }else{
    ans += A[i];
    B[i-1] = B[i-1] - A[i];
    if (B[i-1]-A[i-1]<=0)
    {
      ans += B[i-1];
      A[i-1] = A[i-1]-B[i-1];
    }else{
      ans += A[i-1];
      A[i-1] = 0;
    } 
  }
}
 
printf("%ld",ans);
 
return 0;
 
}