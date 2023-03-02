#include <stdio.h>
int main(){
    float celsi,faren;

    printf("Enter the fahrenheit Value : ");
    scanf("%f",&faren);

    celsi = ((faren-32)*5/9);

    printf("%f F to convert celsius : %.2f C",faren,celsi);



}

