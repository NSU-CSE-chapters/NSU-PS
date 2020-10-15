#include<stdio.h>
#include<math.h>

#define PI acos(-1)

int main()

{
    int Test,l,a;
    double width,radius,tlarea,rectarea,crarea;
    scanf("%d",&Test);
    for(a=0;a<Test;a++)
    {
        scanf("%d",&l);


        width=l*0.6;

        radius=l*0.2;

        tlarea=l*width;

        crarea=PI*radius*radius;

        rectarea=tlarea-crarea;
        
        printf("%.2lf %.2lf\n",crarea,rectarea);
    }
return 0;

}