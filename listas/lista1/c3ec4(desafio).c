#include <stdio.h>

struct Aluno {

char nome[50];
float nt[3], med;
char cc;
};

void calcularMedia(struct Aluno *a) {
a->med = (a->nt[0] + a->nt[1] + a->nt[2]) / 3.0;
}

char definirConceito(float m) {
return m >= 9 ? 'A' : m >= 7.5 ? 'B' : m >= 6 ? 'C' : 'D';
}

void imprimirAluno(struct Aluno a);
 printf("%s %.2f %c\n", a.nome, a.med, a.cc);
}

void ordenarPorNota(struct Aluno t[], int n) {

for (int i = 0; i < n - 1; i++) {
for (int j = i + 1; j < n; j++) {
if (t[j].med > t[i].med) {
struct Aluno aux = t[i];
t[i] = t[j];
t[j] = aux;
}
}
} 

int main() {
int n;
scanf("%d", &n);

struct Aluno t[n];

for (int i = 0; i < n; i++) {
scanf(" %[^\n] %f %f %f", t[i].nome, &t[i].nt[0], &t[i].nt[1], &t[i].nt[2]);
calcularMedia(&t[i]);
t[i].cc = definirConceito(t[i].med);
}

ordenarPorNota(t, n);

for (int i = 0; i < n; i++) imprimirAluno(t[i]);
return 0;
}