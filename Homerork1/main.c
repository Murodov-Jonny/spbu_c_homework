#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a value for a: ");
    scanf("%d", &a);

    printf("Enter a value for b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping values without using a third variable
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
