#include <stdio.h>

int main() {

    double num;
    code:
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0.0)
        printf("You entered a negative number.\n");
    else if (num > 0.0)
        printf("You entered a positive number.\n");
    else {
        printf("You entered 0.\n");
    }

    return 0;
   
}