#include <stdio.h>

struct Placar {
char t1[50], t2[50];
int g1, g2;
};

int main() {

struct Placar p;

scanf(" %[^\n] %d %[^\n] %d", p.t1, &p.g1, p.t2, &p.g2);
printf("Time 1: %s\nGols Time 1: %d\nTime 2: %s\nGols Time 2: %d\n", p.t1, p.g1, p.t2, p.g2);

    if (p.g1 > p.g2) printf("Vencedor: %s\n", p.t1);
    else if (p.g2 > p.g1) printf("Vencedor: %s\n", p.t2);
    else printf("Empate\n");

    return 0;

}
