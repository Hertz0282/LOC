#include<stdio.h>

int main(){

    double r,pi=3.14;
    int op;

    printf("1.Diameter\n2.Circumference\n3.Area");
    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &r);

    printf("\nEnter your choice: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Diameter of a circle of radius %lf: %lf", r, 2*r);
        break;
        
    case 2:
        printf("Circumference of the circle of radius %lf: %lf", r, 2*pi*r);
        break;

    case 3:
        printf("Area of the circle of radius %lf: %lf", r, pi*r*r);
        break;

    default:
        printf("Enter a CORRECT choice");
        break;
    }

    return 0;
}