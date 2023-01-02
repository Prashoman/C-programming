#include <stdio.h>
int main(int argc, char const *argv[])
{
    char str1[] = "Bangla";
    char str2[] = "desh";
    char str3[12];
    int i ,j, length1 = 6, lenght2 = 4;

    for ( i = 0 ,j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }
    for ( i = 0 ; i < lenght2; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n",str3);
    return 0;
}
