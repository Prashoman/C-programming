
#include <stdio.h>
int main(){

    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    if((number % 5 == 0) &&(number % 11 == 0) ){
        printf("%d number is divisible by 5 and 11",number);
    }else{
        printf("%d number is not divisible by 5 and 11",number);
    }

}
