//c program to fidn the second largest element in the array

#include<stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void secondlargest(int arr[]) {
    int n = 1;
    printf("2 largest numbers is : ");
    printf("%d",arr[0]);
    printf("\n\n\n");
}

void bubble(int A[], int n) {
    int i, j, flag;
    int large[1], k = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                swap(&A[j], &A[j + 1]);
            }
        }
        
    }
   large[k]=A[n-2];
    secondlargest(large);
}

int main() {
    int n,i;
     printf("Enter the size of the array :");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    bubble(A, n);
    return 0;
}
