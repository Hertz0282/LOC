#include<stdio.h>

int main(){

    double a,b;
    int op;

    printf("1.Divison\t2.Multiplication\t3.Addition\t4.Substraction");
    printf("\nEnter any two numbers: ");
    scanf("%lf %lf", &a, &b);

    printf("\nEnter your choice: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Divison of %lf and %lf is: %lf", a, b, a/b);
        break;
        
    case 2:
        printf("Multiplication of %lf and %lf is: %lf", a, b, a*b);
        break;

    case 3:
        printf("Sum of %lf and %lf is: %lf", a, b, a+b);
        break;

    case 4:
        printf("Difference of %lf and %lf is: %lf", a, b, a-b);
        break;
    
    default:
        printf("Enter a CORRECT choice");
        break;
    }

    return 0;
}