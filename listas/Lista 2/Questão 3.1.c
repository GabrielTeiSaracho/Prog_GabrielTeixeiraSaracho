//3.a)Soma dos digitos

#include <stdio.h>

int SomaDigitos (int resultado){
    int num1 = 4;
    int num2 = 7;
    int num3 = 2;
    resultado = resultado + num1 + num2 + num3;
    printf ("Resultado dessa conta é: %d.", resultado);
}

int main(){

    int resolucao=0;

    SomaDigitos(resolucao);
}
