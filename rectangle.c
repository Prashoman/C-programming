#include <stdio.h>
int main()
{

    float height, width, Rectangle_Area;

    printf("Enter the value of height : ");
    scanf("%f",&height);
    printf("Enter the value of width : ");
    scanf("%f",&width);

    Rectangle_Area = (height*width);

    printf("Total Rectangle Area is : %.2f",Rectangle_Area);


    return 0;

}
