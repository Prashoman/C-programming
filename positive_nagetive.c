#include <stdio.h>
int main(){

    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    if(number > 0){
        printf("%d Positive Number",number);
    }else if(number < 0){
        printf("%d Nagetive Number",number);
    }else{
        printf("%d Zero Number",number);
    }

}
