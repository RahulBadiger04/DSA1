//C PROGRAMMING CODE TO DELETE AN ELEMENT AT SPECIFIED POSITION
#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the position of element to be deleted : ");
    scanf("%d",&pos);
    i=0;
    while(i<pos-1)
    i++;
    while(i<n)
    {
        arr[i]=arr[i+1];
        i++;
    }
    n--;
    printf("Array after removal of element : ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;

}