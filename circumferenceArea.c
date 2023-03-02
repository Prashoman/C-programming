#include <stdio.h>
int main(){

    float pi = 3.1416;
    int r;
    printf("Enter the Circumference Radius r : ");
    scanf("%d",&r);

    float Area_Circumference = 2*pi*r;

    printf("Circumference Area is : %.2f",Area_Circumference);


}
