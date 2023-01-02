#include <stdio.h>
int main()
{
    double a,b,sum;
    a = 9.5;
    b = 10.876539;

    sum = a + b;

    printf("value of a : %lf\n",a);
    printf("value of b : %lf\n",b);
    printf("value of sum : %lf\n",sum);
    printf("value of sum : %0.2lf\n",sum);
    return 0;
}
