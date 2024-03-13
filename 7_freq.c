#include<stdio.h>
int main()
{
    char str[100],choice;
    int i,ctr=0;
    printf("Input the string:");
    fgets(str,sizeof str,stdin);
    printf("Input the charecter of which freq is to be calculated:");
    scanf("%c",&choice);
    for(i=0;str[i]!='\0';++i)
    {
        if(choice==str[i])
        ++ctr;
    }
    printf("The frequncy of  %c is %d\n",choice,ctr);
    return 0;
}