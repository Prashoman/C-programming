#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    char* arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
    for (int n = a; n <= b; n++)
    {
        if (n<=9)
        {
            printf("%s\n",arr[n]);
        }
        if (n>9)
        {
            if (n%2 == 0)
            {
                printf("even\n");
            }
            else{
                printf("odd\n");
            }
            
            
        }
        
        
        
    }
    
    return 0;
}


