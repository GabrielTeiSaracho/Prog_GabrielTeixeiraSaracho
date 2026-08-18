#include <stdio.h>

struct Produto {

char nome[50];
float preco;
int qtd;

};

int main() {

struct Produto p;

scanf(" %[^\n] %f %d", p.nome, &p.preco, &p.qtd);
printf("%s\n%.2f\n", p.nome, p.preco * p.qtd);

return 0;
}
