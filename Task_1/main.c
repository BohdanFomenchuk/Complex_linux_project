#include <stdio.h>
#include "calc.h"

int main() {
    int choice;
    int a, b;
    int n;

    printf("Select operation:\n");
    printf("1: Addition\n2: Subtraction\n3: Factorial\n4: Product\n5: Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %d\n", sum(a, b));
            break;
        case 2:
            printf("Enter first number: ");
            scanf("%d", &a);
	    printf("Enter second number: ");
	    scanf("%d", &b);
            printf("Result: %d\n", difference(a, b));
            break;
        case 3:
            printf("Enter a number to calculate factorial: ");
            scanf("%d", &n);
            printf("Result: %d\n", factorial(n));
            break;
	case 4:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %d\n", product(a, b));
            break;
	case 5:
            printf("Enter first number: ");
            scanf("%d", &a);
            printf("Enter second number: ");
            scanf("%d", &b);
            printf("Result: %f\n", division(a, b));
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

