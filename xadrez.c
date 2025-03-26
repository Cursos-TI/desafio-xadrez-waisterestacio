#include <stdio.h>

int main() {
    // Definindo a quantidade de movimentos para cada peça em variáveis
    int movimentos_torre = 5;    // Torre move 5 casas para a direita
    int movimentos_bispo = 5;    // Bispo move 5 casas na diagonal
    int movimentos_rainha = 8;   // Rainha move 8 casas para a esquerda

    // 1. Simulação do movimento da Torre usando for
    printf("Movimento da Torre (%d casas para a direita):\n", movimentos_torre);
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }
    
    // 2. Simulação do movimento do Bispo usando while
    printf("\nMovimento do Bispo (%d casas na diagonal superior direita):\n", movimentos_bispo);
    int contador_bispo = 0;
    while (contador_bispo < movimentos_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    // 3. Simulação do movimento da Rainha usando do-while
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", movimentos_rainha);
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimentos_rainha);
    
    return 0;
}
