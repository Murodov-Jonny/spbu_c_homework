#include <stdio.h>
#include <stdlib.h>

int incompleteQuotient(int a, int b) {
    if (b == 0) {
        printf("Error: Divisor cannot be zero\n");
        exit(EXIT_FAILURE);
    }

    // Check sign and store it for the result
    int sign = (a < 0) ^ (b < 0) ? -1 : 1;
    a = abs(a);
    b = abs(b);

    int quotient = 0;

    while (a >= b) {
        a -= b;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int num1, num2;

    printf("Enter the dividend: ");
    scanf("%d", &num1);
    printf("Enter the divisor: ");
    scanf("%d", &num2);

    int result = incompleteQuotient(num1, num2);
    printf("Incomplete quotient of %d divided by %d: %d\n", num1, num2, result);

    return 0;
}
