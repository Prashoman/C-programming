#include <stdio.h>
void changeArray(int arry[]){
    arry[2] = 40;
}
int main()
{
    int arry[10]={1,2,3,4,5,6,7};
    changeArray(arry);
    for (int i = 0; i < 7; i++)
    {
        printf("%d.=, is %d\n",i+1,arry[i]);
    }
    
    
    return 0;
}
