#include <stdio.h>
int main()
{

    int c_value;
    float meter,kilo_meter;
    printf("Enter the value of centimeter : ");
    scanf("%d",&c_value);
    meter = c_value/100.0;
    kilo_meter = c_value/ 100000.0;

    printf("%d c to Convert Meter = %.2f m\n",c_value,meter);
    printf("%d c to Convert kilo_Meter = %.2f km",c_value,kilo_meter);

    return 0;

}
