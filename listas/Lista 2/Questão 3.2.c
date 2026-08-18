#include <stdio.h>

int contarChar(char s[], int i, char c) {
    if (s[i] == '\0') {
        return 0;
    }
    
    if (s[i] == c) {
        return 1 + contarChar(s, i + 1, c);
    }
    
    return contarChar(s, i + 1, c);
}

int main() {

    char texto[] = "banana"; 
    char alvo = 'a'; 
    
    int resultado = contarChar(texto, 0, alvo);
    
    printf("O caractere '%c' aparece %d vezes na palavra \"%s\".\n", alvo, resultado, texto);
    
    return 0;
}