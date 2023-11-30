#include <stdio.h>

int main() {
    int a, b;

    printf("Введите значение для a: ");
    scanf("%d", &a);

    printf("Введите значение для b: ");
    scanf("%d", &b);

    printf("До обмена:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("После обмена:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);


    return 0;
}
