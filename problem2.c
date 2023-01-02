#include <stdio.h>
int main()
{
    int i= 1;
    int  n, j;
    printf("Enter the  value of namta : ");
    scanf("%d", &n);
    printf("Enter the  value of print value : ");
    scanf("%d", &j);
    
     while (i<=j)
     {
       printf("%d x %d = %d\n",i,n,i*n);
       i++;
     }
     
    return 0;
}
