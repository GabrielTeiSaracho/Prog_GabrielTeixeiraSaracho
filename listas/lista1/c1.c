#include <stdio.h>

float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return b == 0 ? 0 : a / b; }

int main() {

float n1, n2;
scanf("%f %f", &n1, &n2);
printf("%.2f\n%.2f\n%.2f\n%.2f\n", somar(n1, n2), subtrair(n1, n2), multiplicar(n1, n2), dividir(n1, n2));
return 0;

}
