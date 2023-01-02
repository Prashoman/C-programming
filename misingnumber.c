#include <stdio.h>
int misingnumber(int arry[], int num){
    int total = ((num+1)*(num+2))/2;
    for (int i = 0; i < num; i++)
    {
        total -= arry[i];
    }
    return total;
}
int main(int argc, char const *argv[])
{
    int ar[] = {1,2,3,4,6,7,8};
    int miss = misingnumber(ar,7);
    printf("%d",miss);
    return 0;
}
