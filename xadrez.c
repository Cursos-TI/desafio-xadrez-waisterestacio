#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função recursiva para movimentar a Torre
void mover_torre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    mover_torre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void mover_bispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    mover_bispo(casas - 1);
}

// Função recursiva para movimentar a Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    mover_rainha(casas - 1);
}

// Função para movimentar o Bispo com loops aninhados
void mover_bispo_aninhado(int casas) {
    printf("\nMovimento do Bispo com loops aninhados (%d casas):\n", casas);
    
    for (int v = 0; v < casas; v++) {
        for (int h = 0; h < 1; h++) {
            printf("Cima, Direita\n");
        }
    }
}

// Função para obter direção válida do usuário
void obter_direcao(const char* prompt, char* direcao) {
    int valido = 0;
    while (!valido) {
        printf("%s", prompt);
        scanf("%s", direcao);
        
        // Converter para minúsculas
        for(int i = 0; direcao[i]; i++) {
            direcao[i] = tolower(direcao[i]);
        }
        
        if(strcmp(direcao, "cima") == 0 || strcmp(direcao, "baixo") == 0 ||
           strcmp(direcao, "esquerda") == 0 || strcmp(direcao, "direita") == 0) {
            valido = 1;
        } else {
            printf("Direção inválida! Use: cima, baixo, esquerda ou direita.\n");
        }
    }
}

// Função para movimentar o Cavalo com direção personalizada
void mover_cavalo_personalizado() {
    char direcao_principal[10];
    char direcao_secundaria[10];
    
    printf("\nConfiguração do movimento do Cavalo (em L):\n");
    
    // Obter direções do usuário
    obter_direcao("Informe a direção principal (2 casas - cima/baixo): ", direcao_principal);
    obter_direcao("Informe a direção secundária (1 casa - esquerda/direita): ", direcao_secundaria);
    
    printf("\nMovimento do Cavalo (2 casas para %s e 1 casa para %s):\n", 
           direcao_principal, direcao_secundaria);
    
    // Primeira parte do L (2 casas)
    for (int i = 0; i < 2; i++) {
        printf("%s\n", direcao_principal);
    }
    
    // Segunda parte do L (1 casa)
    printf("%s\n", direcao_secundaria);
}

int main() {
    // Definindo a quantidade de movimentos para cada peça
    const int mov_torre = 5;
    const int mov_bispo = 5;
    const int mov_rainha = 8;
    const int mov_bispo_aninhado = 5;

    printf("Movimento da Torre (%d casas para a direita):\n", mov_torre);
    mover_torre(mov_torre);
    
    printf("\nMovimento do Bispo (%d casas na diagonal) - recursivo:\n", mov_bispo);
    mover_bispo(mov_bispo);
    
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", mov_rainha);
    mover_rainha(mov_rainha);
    
    mover_bispo_aninhado(mov_bispo_aninhado);

    mover_cavalo_personalizado();
    
    return 0;
}