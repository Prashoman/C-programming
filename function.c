#include <stdio.h>
double sum (double a, double b);
int main()
{
   double result = sum(10.45,20.59008);
   printf("Total Is : %0.2lf",result);
    return 0;
}
double sum (double n, double m){
    double X = n + m ;
    return X;
}