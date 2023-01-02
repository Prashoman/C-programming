#include <stdio.h>
int main()
{
    int fst_mark[20] ={60,55,45,80,90,89,78,65,80,97,67,56,56,89,40,60,50,55,53,40},
    snd_mark[20] = {60,55,45,80,90,89,78,65,80,97,67,56,56,89,40,60,50,55,53,40},
    final_mark[20] = {60,55,45,80,90,89,78,65,80,97,67,56,56,89,40,60,50,55,53,40};
    int i, total_mark[20];
    int count = 0;
    for ( i = 0; i < 20; i++)
    {
        total_mark[i] = (fst_mark[i]/4) + (snd_mark[i]/4) + (final_mark[i]/2);

    }
    for(i=1; i<=20; i++){
        //printf("Roll No: %d\t Total Mark : %d\n",i,total_mark[i-1]);
        if(total_mark[i-1] >= 90){
            printf("90 geterden Roll No: %d\t Total Mark : %d\n",i,total_mark[i-1]);
        }
        else if (total_mark[i-1] >= 80)
        {
            count++;
            printf("80 geterden cont %d Roll No: %d\t Total Mark : %d\n",count,i,total_mark[i-1]);
        }
        
    }
    
    return 0;
}
