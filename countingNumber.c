#include <stdio.h>
int main(int argc, char const *argv[])
{
    int count = 0, num, temp,result;
    scanf("%d",&num);
    temp = num;
    while (temp !=0)
    {
        result = temp%10;
        count++;
        temp = temp/10;
    }
    printf("Number %d cout digit : %d",num,count);
    return 0;
}
