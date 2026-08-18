#include <stdio.h>

struct Pessoa {

char nome[50];
int idade;
float altura;
};

int main() {
struct Pessoa p;
scanf(" %[^\n] %d %f", p.nome, &p.idade, &p.altura);
printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", p.nome, p.idade, p.altura);

return 0;
}
