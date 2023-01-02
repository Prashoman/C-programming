#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char s[1002], ch;
    int i,j,startword = 0;
    gets(s);
    int lenght = strlen(s);
for ( i = 0; i <= lenght; i++)
{
    if(s[i] >= 'a' && s[i] <= 'z'){
        if(startword == 0){
            startword = 1;
            ch = 'A'+ s[i]-'a';
            printf("%c",ch);
        }
        else{
            printf("%c", s[i]);
        }
    }else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 0 && s[i] <= 9)
    {
        if (startword == 0)
        {
            startword = 1;
           
        }
        else{
           printf("%c", s[i]);
        }
                   
    }else{
        if (startword == 1)
        {
           startword = 0;
          
           printf("\n");
           
        }
        
    }
    
}
 printf("\n");
    
    return 0;
}
