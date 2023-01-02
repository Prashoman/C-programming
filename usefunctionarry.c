#include <stdio.h>
int find_max( int arr[], int n);
int main()
{
    int arr[] = {100,300,50,30,59,23,50,12,9,10};
    int n = 10;

     int max = find_max(arr, n);
     printf("%d %d\n",n,max);

    return 0;
}
int find_max( int arr[], int n){
    int max = arr[0];
    int i ;
    // int max = arr[i];
    for ( i = 1; i < n; i++)
    {
        if(arr[i]>max){
            max = arr[i];
        }
       
    }
     return max;
    
}