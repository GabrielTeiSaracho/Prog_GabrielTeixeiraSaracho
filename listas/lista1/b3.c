#include <stdio.h>

struct Jogador {

char nome[50];
int pontos;

};

int main() {
int n, max = 0, min = 0;
scanf("%d", &n);

struct Jogador j[n];

for (int i = 0; i < n; i++) {
scanf(" %[^\n] %d", j[i].nome, &j[i].pontos);
if (j[i].pontos > j[max].pontos) max = i;
if (j[i].pontos < j[min].pontos) min = i;
}

printf("Jogador com mais pontos: %s %d\nJogador com menos pontos: %s %d\n", j[max].nome, j[max].pontos, j[min].nome, j[min].pontos);
return 0;
}
