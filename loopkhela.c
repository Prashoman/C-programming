#include <stdio.h>
int main()
{
    int i,j;
    int lenght = 5;
    for ( i = 1; i < lenght; i++)
    {
        for ( j = 1; j <=i; j++)
        {            
                printf("%d", i );
        }
        printf("\n");
    }
    
    return 0;
}
