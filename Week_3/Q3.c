#include<stdio.h>

int main(){

    int num1, num2, *p, *q, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter first number: ");
    scanf("%d", &num2);

    p = &num1;
    q = &num2;

    sum = *p + * q;

    printf("Sum of the numbers: %d", sum);
}