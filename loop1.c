#include <stdio.h>
int main()
{
    int i,j;
    int n =5;
    for ( i = 1; i <= n; i++)
    {
        printf("\n");
        for ( j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        
    }
    
    return 0;
}
