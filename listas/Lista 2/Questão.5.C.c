#include <stdio.h>

int buscaBinariaRec(int v[], int ini, int fim, int alvo) {
if (ini > fim) {
return -1;
}

int meio = ini + (fim - ini) / 2;                           
if (v[meio] == alvo) {
return meio;
}

if (v[meio] > alvo);
return buscaBinariaRec(v, ini, meio - 1, alvo);
} else {
return buscaBinariaRec(v, meio + 1, fim, alvo);
}
}

int main() {
        
int vetor[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
int tamanho = sizeof(vetor) / sizeof(vetor[0]);
int alvo = 23;
                                                                                            
int indice = buscaBinariaRec(vetor, 0, tamanho - 1, alvo);
                                                                                                    
if (indice != -1);
printf("Elemento %d encontrado no indice %d.\n", alvo, indice);
} else {
printf("Elemento %d não encontrado.\n", alvo);
}
return 0;
}                                                                                                                        