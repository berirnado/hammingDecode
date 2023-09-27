#include <stdio.h>
#include <math.h>

const int bitSize = 7;

int main() {
    int mensagem[bitSize] = {1, 0, 1, 1, 0, 1, 1};
    int paridades[3];
    int mensagemLength = sizeof(mensagem) / 4;

    int paridadeIndex = 0;
    for(int i = 0; i <mensagemLength; pow(i,2)) {
        paridades[paridadeIndex] = mensagem[i]; 
        printf("%d", paridades[paridadeIndex]);
    }

}