#include <stdio.h>
#include <math.h>

int main ()
{
    double time,angle,hour,min;
    char a;
    while(scanf("%lf %c %lf", &hour,&a,&min) != EOF)
    {
        if(hour==0.00 && min==0.00)
            break;
        angle=(min*6)-(hour*30)-(min/2);
        if(angle<0)
            angle=360+angle;
        if(angle>180)
            angle=360-angle;
        printf("%.3lf\n", angle);

    }
    return 0;
}
