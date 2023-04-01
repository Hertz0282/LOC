#include<stdio.h>

int main() {

    int a[100],i,j=0,n,temp;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            if (i!=j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            j++;   
        }
        
    }

    printf("\nThe sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d " , a[i]);
    }
    
    
}