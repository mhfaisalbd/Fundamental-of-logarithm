#include    <stdio.h>
#include    <math.h>

int main()
{
    double a, x;
    scanf("%lf%lf",&a,&x); /*base of log a and operand value x  */
    double b=0.0001, c;
    while (c!=x)
    {
        c=pow(a,b);

        b=b+0.0001;
        if (c>x)
            break;
    }
    printf("%0.2lf\n",b); /* The logaritm value of x based on a */
    return 0;
}
