#include <stdio.h>
int main()
{
    int a , b ;

    printf("Enter the first number a :");
    scanf("%d", &a);
    printf("Enter the another number b :");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d x %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    
    
    return 0;
}
