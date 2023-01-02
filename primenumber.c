#include <stdio.h>
#include <math.h>
int PrimeNumber(int number){

if(number%2 ==0){
    return 0;
}
if (number == 1)
{
    return 1;
}

int lenght = sqrt(number);

for (int i = 3; i <= lenght; i++)
{
    if(number%i == 0){
        return 0;
    }
}
return 1;


}
int main()
{
    while (1)
    {
        int N;
        printf("Enter Any number : ");
        scanf("%d",&N);
        int value = PrimeNumber(N);

        if (value == 1)
        {
            printf("%d is a PrimeNumber",N);
        }else{
            printf("%d is Not a PrimeNumber",N);
        }

    }

    return 0;
}
