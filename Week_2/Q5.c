#include<stdio.h>

int main(){

    int a[100], i, n, b[100];

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    for (i=0; i<n; i++){

        printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }

    for (i=0; i<n; i++){
        b[i] = a[i];
    }

    printf("The first array is:\n");
    for (i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    printf("\nThe second array is:\n");
    for (i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    return 0;

}