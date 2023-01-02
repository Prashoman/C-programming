#include <stdio.h>
int main(int argc, char const *argv[])
{
   int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
   int low_index = 0;
   int high_index = 10;
   int N = 7;
   int mid ;

   while (low_index<=high_index)
   {
    mid = (high_index+low_index)/2;
    if(arr[mid] == N){
        break;
    }
     if(arr[mid] > N){
        high_index = mid - 1;
     }
     else{
        low_index = mid + 1;
     }
   }
   printf("%d found the elements",arr[mid]);
   
    return 0;
}
