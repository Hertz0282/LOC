#include<stdio.h>

int main(){

    int a[100], n, i;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    int max_count = 1;
    int count = 1;
    int res = a[0];
    for (i=0; i<n; i++){
        if(a[i]==a[n-i]){
            count++;
        }
        else{
            count = 1;
        }

        if(count>max_count){
            max_count = count;
            res = a[n-i];
        }
    }

    printf("Maximum occurring integer in the array is %d", res);
}