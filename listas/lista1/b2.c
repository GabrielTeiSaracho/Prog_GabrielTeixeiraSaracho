#include <stdio.h>

struct Produto {

char nome[50];
float pr;
int qt;

};

int main() {
int n, m_idx = 0;
float tot = 0, m_val = -1;
scanf("%d", &n);

struct Produto e[n];

for (int i = 0; i < n; i++) {
scanf(" %[^\n] %f %d", e[i].nome, &e[i].pr, &e[i].qt);
float v = e[i].pr * e[i].qt;
tot += v;
if (v > m_val) { m_val = v; m_idx = i; }
}

for (int i = 0; i < n; i++) {
float v = e[i].pr * e[i].qt;
printf("%s %.2f %.2f\n", e[i].nome, v, v * 0.9);
}

printf("%.2f\n%s\n", tot, e[m_idx].nome);

return 0;
}
