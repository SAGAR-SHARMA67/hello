#include <stdio.h>

int main() {
    float a, b;
    int c;

    printf("1.Addition  2.Subtraction  3.Division  4.Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &c);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (c) {
        case 1: printf("Result = %f\n", a + b); break;
        case 2: printf("Result = %f\n", a - b); break;
        case 3: 
            if (b != 0) printf("Result = %f\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        case 4: printf("Result = %f\n", a * b); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}