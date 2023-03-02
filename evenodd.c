#include <stdio.h>
int main(){

    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number%2 == 0){
        printf("%d number is Even",number);
    }else{
        printf("%d number is odd",number);
    }

}
