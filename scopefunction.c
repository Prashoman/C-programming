#include <stdio.h>
double pi = 3.1416;

double Test(int x){
    double y = x;
    x = y*2;
    return  x*y;
}
int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    z = Test(x);
    printf("%d,%lf,%d,%d",x,pi,y,z);

    return 0;
}
