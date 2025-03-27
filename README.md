# Projeto de Xadrez em C - Nível Mestre

Este projeto demonstra movimentos avançados de peças de xadrez utilizando:
- Recursividade (Torre, Bispo, Rainha)
- Loops aninhados complexos (Bispo)
- Controle preciso de fluxo (Cavalo)

## Funcionalidades Implementadas

1. **Movimentos Recursivos**:
   - Torre: movimento horizontal recursivo
   - Bispo: movimento diagonal recursivo
   - Rainha: movimento horizontal recursivo

2. **Loops Aninhados**:
   - Bispo com loops externo (vertical) e interno (horizontal)

3. **Movimento Complexo do Cavalo**:
   - Implementação com loops e controle preciso usando `continue` e `break`
   - Movimento em L padrão (2 casas verticais + 1 horizontal)

## Como Compilar e Executar

```bash
gcc xadrez.c -o xadrez
./xadrez
