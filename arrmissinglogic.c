#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum =0,total,sesum =0;

    int arr[] =  {1,2,3,5,6,7,8};
for (int i = 0; i < 7; i++)
{
    sum = sum+arr[i];
}
for ( int j = arr[0]; j <= arr[6]; j++)
{
    sesum = sesum + j;
}

if(sesum > sum){
    total =  sesum -sum;
}
printf("%d\n",sum);
printf("%d\n",sesum);
printf("%d",total);
    return 0;
}
