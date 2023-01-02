#include <stdio.h>
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int temp[7],j,i;
    for ( i = 0, j = 6; i < 7; i++,j--)
    {
       temp[i] = arr[j];
       
       
       printf("%d\n",temp[i]);
    }
    for (i = 0; i < 7; i++)
    {
        
        // printf("%d\n",arr[i]);
        /* code */
    }
    
    
    return 0;
}
