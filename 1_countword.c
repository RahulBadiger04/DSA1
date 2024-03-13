#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100
int main()
{
    char str[str_size];
    int i,wrd;
    printf("Enter the string \n");
    fgets(str,sizeof str,stdin);
    i=0,wrd=0;
    while(str[i]!='\0')
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
        wrd++;
        i++;
    }
    printf("The number of words in the string is : %d\n",wrd);
    return 0;
}