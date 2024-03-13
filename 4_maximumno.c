// c program to find the maximum number of charecters in the string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100
#define cha_no 255
int main()
{
    char str[str_size];
    int ch_fre[cha_no];
    int i=0,max;
    int ascii;
    printf("Input the strin: ");
    fgets(str,sizeof str,stdin);
    for(i=0;i<cha_no;i++)
    ch_fre[i]=0;
    i=0;
    while(str[i]!='\0')
    {
       ascii=(int)str[i];
       ch_fre[ascii]+=1;
       i++;
    }

max=0;
for(i=0;i<cha_no;i++)
{
    if(i!=32)
    {
        if(ch_fre[i]>ch_fre[max])
        {
            max=i;
        }
    }
}
printf("The highest frequency of '%c' appears %d times",max,ch_fre[max]);
return 0;
}