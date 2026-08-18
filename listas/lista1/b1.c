#include <stdio.h>

struct Aluno {
char nome[50];
float nota;
};

int main() {

int n, ap = 0;
float soma = 0;
scanf("%d", &n);
struct Aluno t[n];

for (int i = 0; i < n; i++) {
scanf(" %[^\n] %f", t[i].nome, &t[i].nota);
soma += t[i].nota;

if (t[i].nota >= 7) ap++;

for (int i = 0; i < n; i++) printf("%s %.1f\n", t[i].nome, t[i].nota);
                        printf("%.2f\n%d\n", soma / n, ap);
return 0;
}
