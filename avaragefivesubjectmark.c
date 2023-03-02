#include <stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float avarege_Mark;
    printf("Enter the 1st subject mark : ");
    scanf("%d",&sub1);
    printf("Enter the 2nd subject mark : ");
    scanf("%d",&sub2);
    printf("Enter the 3rd subject mark : ");
    scanf("%d",&sub3);
    printf("Enter the 4th subject mark : ");
    scanf("%d",&sub4);
    printf("Enter the 5th subject mark : ");
    scanf("%d",&sub5);

    avarege_Mark = ((sub1+sub2+sub3+sub4+sub5)/5.0);

    printf("Avarege Five Subject Mark is : %.2f",avarege_Mark);

}
