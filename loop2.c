#include <stdio.h>
int main()
{
   int row , col, N;

printf("Enter the Value N : ");
scanf("%d",&N);
for ( row = 1; row <= N; row++){
   for (col = 1; col<=row; col++)
   {
   printf("*");
   }
   printf("\n");
   
}

for ( row = N-1; row >= 1; row--)
{
   
   for ( col = row; col>=1; col--)
   {
     printf("*");
   }
   printf("\n");
}


    return 0;
}
