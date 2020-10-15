#include <stdio.h>

int main() {


	int Test,n,rem;
	int sum=0;
	scanf("%d",&Test);
	if(Test<=1000){
	for(int i=0;i<Test;i++)
	{
	    scanf("%d",&n);
	    for(int j=n;j>0;j=j/10)
	    {
	       rem = j%10; 
	       sum = sum+rem;
	    }
	    printf("%d\n",sum);
	    sum=0;
	}
	}
	return 0;
}
