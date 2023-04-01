#include<stdio.h>

int main()
{   
    int arr[] = {1,3,2,2,2,3,7,0,8,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;

    int res = 0;
    for (int i=0; i<n; i++){
        if(x == arr[i]){
            res++;
        }       
    }
    
    printf("Occurrence of number 2 in the given array is: %d", res);

    return 0;
}