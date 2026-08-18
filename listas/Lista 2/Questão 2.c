//Questão 2 - Fatorial e teste de mesa (0,30 pt)
#include <stdio.h>

int fatorial(int n){
    if (n == 0) return 1;
    return n * fatorial(n - 1);
}

int main(){
    
    printf ("%d!", fatorial(4));
}

//B)
//  Descida: Fatorial (4) chama fatorial (3)
//  Descida: Fatorial (3) chama fatorial (2)
//  Descida: Fatorial (2) chama fatorial (1)
//  Subida: 4x1 = 4
//  Subida: 4x2 = 8
//  Subida: 8x3 = 24
//  Subida: Retorne 1
              