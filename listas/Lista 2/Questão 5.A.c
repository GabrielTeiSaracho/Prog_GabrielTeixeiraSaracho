#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
    return a;
    }

    return mdc(b, a % b);
}

    int main() {
    int resultado = mdc(48, 18);
    printf("MDC(48, 18) = %d\n", resultado);
    return 0;
}
