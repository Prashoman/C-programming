#include <stdio.h>
int main(){
    float celsi,faren;

    printf("Enter the Celsius Value : ");
    scanf("%f",&celsi);

    faren = ((celsi*9/5.00)+32);

    printf("%f C to convert fahrenheit : %.2f F",celsi,faren);



}
