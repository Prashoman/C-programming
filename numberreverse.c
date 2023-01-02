#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num ,sum = 0,temp,r;
    scanf("%d",&num);
    temp = num;
    while (temp != 0)
    {
        r = temp%10;
        sum = (sum*10)+r;
        temp = temp/10;
        
    }
    printf("This Number %d is Reverse: %d",num,sum);
    return 0;
}
