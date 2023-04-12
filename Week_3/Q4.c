#include<stdio.h>

void findFact(int n, int *f){

    int i;
    *f = 1;

    for(i=1; i<=n; i++){
        *f = *f*i;
    }
}

int main(){

    int fact, num1;

    printf("Input a number: ");
    scanf("%d", &num1);

    findFact(num1 , &fact);
    printf("The factorial of %d is : %d ", num1, fact);
}