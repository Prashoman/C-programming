#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the 1st number : ");
    scanf("%d",&num1);
    printf("Enter the 2nd number : ");
    scanf("%d",&num2);

    int sum = num1 + num2;

    int sub = num1 - num2;

    int Multiplie = num1*num2;
    int  division = num1 / num2;

    int modulas = num1%num2;

    printf("The sum of %d + %d = %d\n",num1,num2,sum);
    printf("The sub of %d - %d = %d\n",num1,num2,sub);
    printf("The product of %d x %d = %d\n",num1,num2,Multiplie);
    printf("The division of %d / %d = %d\n",num1,num2,division);
    printf("The remender of %d remender %d = %d\n",num1,num2,modulas);



}
