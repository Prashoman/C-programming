#include <stdio.h>
int bainaryserch(int H, int L, int arr[], int n){
    int mid ;
while (L <= H)
{
    mid = (H + L)/2;
   if(arr[mid] == n){
        mid = arr[mid];
   }
    else if(arr[mid]> n){
         H = mid - 1;
    }
    else{
        L = mid + 1;
     }
}
printf("%d", arr[mid]);

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int low = 0;
    int high = 10;
    int N = 3;
    
 bainaryserch(high,low,arr,N);

    /* code */
    return 0;
}
