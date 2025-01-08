#include <stdio.h>

int main() {
    // Operadores Aritméticos
    int a = 10, b = 3;
    printf("Aritméticos:\n");
    printf("Adição: %d + %d = %d\n", a, b, a + b);
    printf("Subtração: %d - %d = %d\n", a, b, a - b);
    printf("Multiplicação: %d * %d = %d\n", a, b, a * b);
    printf("Divisão: %d / %d = %d\n", a, b, a / b);
    printf("Módulo: %d %% %d = %d\n\n", a, b, a % b);

    // Operadores de Atribuição
    int c = a;
    printf("Atribuição:\n");
    printf("c = %d\n", c);
    c += b;
    printf("c += b -> %d\n", c);
    c -= b;
    printf("c -= b -> %d\n", c);
    c *= b;
    printf("c *= b -> %d\n", c);
    c /= b;
    printf("c /= b -> %d\n", c);
    c %= b;
    printf("c %%= b -> %d\n\n", c);

    // Operadores Bitwise
    printf("Bitwise:\n");
    printf("AND: %d & %d = %d\n", a, b, a & b);
    printf("OR: %d | %d = %d\n", a, b, a | b);
    printf("XOR: %d ^ %d = %d\n", a, b, a ^ b);
    printf("NOT: ~%d = %d\n", a, ~a);
    printf("Shift Left: %d << 1 = %d\n", a, a << 1);
    printf("Shift Right: %d >> 1 = %d\n\n", a, a >> 1);

    // Operadores Relacionais
    printf("Relacionais:\n");
    printf("%d == %d -> %d\n", a, b, a == b);
    printf("%d != %d -> %d\n", a, b, a != b);
    printf("%d > %d -> %d\n", a, b, a > b);
    printf("%d < %d -> %d\n", a, b, a < b);
    printf("%d >= %d -> %d\n", a, b, a >= b);
    printf("%d <= %d -> %d\n\n", a, b, a <= b);

    // Operadores Lógicos
    int x = 1, y = 0;
    printf("Lógicos:\n");
    printf("AND: %d && %d -> %d\n", x, y, x && y);
    printf("OR: %d || %d -> %d\n", x, y, x || y);
    printf("NOT: !%d -> %d\n\n", x, !x);

    // Operadores Diversos
    printf("Diversos:\n");
    printf("Ternário: %d > %d ? %d : %d -> %d\n\n", a, b, a, b, a > b ? a : b);

    // Precedência de Operadores
    printf("Precedência:\n");
    int result = a + b * c;
    printf("a + b * c = %d\n", result);
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);

    return 0;
}
