#include<stdio.h>


int main()
{
    int arr1[50], arr2[50], size1, size2, i, k, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    
    int n = size1 + size2;
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++){
        printf("%d ", merge[i]);
    }

    int temp;
    for(int i=0; i<n/2; i++)
    {
        temp = merge[i];
        merge[i] = merge[(n-1)-i];
        merge[(n-1)-i] = temp;
    }

    printf("\nAfter reversal:\n");
    for(int i=0; i<n; i++){
        printf("%d ", merge[i]);
    }

    return 0;

}