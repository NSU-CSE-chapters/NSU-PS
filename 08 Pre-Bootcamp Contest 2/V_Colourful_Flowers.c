#include<stdio.h>
#include<math.h>

#define PI acos(-1)
int main()
{
    double a,b,c, sunflowers,s, violets, roses, triangle,r,R, inner_cir, out_cir;

    while(scanf("%lf%lf%lf", &a, &b,&c)==3)
{

    s=  (a+b+c)/2;
    triangle =  sqrt(s*(s-a)*(s-b)*(s-c));
    r= triangle /s;
    roses = PI * r*r;
    violets = triangle - roses;
    R =  (a*b*c)/(4*triangle);
    sunflowers = (PI * R*R ) - triangle;
    
    printf("%.4lf %.4lf %.4lf\n", sunflowers, violets, roses);
}
    return 0;
}


        