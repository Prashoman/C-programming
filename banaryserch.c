#include <stdio.h>

int main(int argc, char const *argv[])
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int start = 0, end = 9;
    int k = 2;

    while (start<end)
    {
        int mid = (start+end)/2;
        if(arr[mid] == k){
            printf("yes %d",k);
        }
        else if (arr[mid]>k)
        {
            end = arr[mid] - 1;
        }
        else{
            start = arr[mid] + 1;
        }
        
    }
    
    return 0;
}
