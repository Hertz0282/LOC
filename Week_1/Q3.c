#include<stdio.h>

int main()
{
    int n,temp,sum = 0,rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    do{
        rem = temp % 10;
        sum = sum + rem;
        temp = temp/10;
    }

    while (temp!= 0);
    printf("Sum of the digits of %d = %d\n", n, sum);

    return 0;
}