#include <stdio.h>

// Declaração dos protótipos das funções
void moverRainha();
void moverBispo();
void moverTorre();
void moverCavalo();

// Função principal
int main() {
    int opcao;
    printf("Escolha uma peça de xadrez para mover:\n");
    printf("1. Rainha\n");
    printf("2. Bispo\n");
    printf("3. Torre\n");
    printf("4. Cavalo\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            moverRainha();
            break;
        case 2:
            moverBispo();
            break;
        case 3:
            moverTorre();
            break;
        case 4:
            moverCavalo();
            break;
        default:
            printf("Opção inválida!\n");
    }
}
// função para mover a rainha 

void moverRainha() {
    int movimentos = 3; // Defina quantas vezes deseja repetir o movimento
    while (movimentos--) {
        for (int i = 0; i < 2; i++) printf("diagonal\n"); // movimento diagonal
        for (int i = 0; i < 2; i++) printf("frente\n");   // movimento para frente
        for (int i = 0; i < 1; i++) printf("direita\n");   // movimento para direita
    }
}

// função para mover o bispo

void moverBispo() {
    int movimentos = 2; // Defina quantas vezes deseja repetir o movimento
    while (movimentos--) {
        for (int i = 0; i < 2; i++) printf("diagonal\n"); // movimento diagonal
        for (int i = 0; i < 2; i++) {   
            printf("frente\n");  // movimento para frente
            printf("L\n"); // movimento em L
        }
    }
}
// função para mover a torre
void moverTorre() {
    int movimentos = 1; // Defina quantas vezes deseja repetir o movimento
    while (movimentos--) {
        for (int i = 0; i < 5; i++) printf("direita\n"); /// movendo 5 casas para direita
    }
}

// função para mover o cavalo em L
void moverCavalo() {
    int movimentoCompleto = 1; // Defina quantas vezes deseja repetir o movimento em L

    while (movimentoCompleto--) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n"); // imprime "Cima" duas vezes
        }
        printf("Direita\n"); // imprime "Direita" uma vez
    }
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n"); // imprime "Baixo" duas vezes
    }
    printf("Esquerda\n"); // imprime "Esquerda" uma vez

    
    
    return;
}