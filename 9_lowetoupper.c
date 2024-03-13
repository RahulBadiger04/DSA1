#include<stdio.h>
#include<ctype.h>
int main()
{
    int ctr=0;
    char str_char;
    char str[100];
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("String in upper case is:");
    while(str[ctr])
    {
        str_char=str[ctr];
        putchar(toupper(str_char));
        ctr++;
    }
    printf("\n");
    return 0;
}