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
    for (int i = 0; i < 5; i++) printf("direita\n");
    for (int i = 0; i < 2; i++) printf("diagonal\n");
    for (int i = 0; i < 2; i++) {
        printf("frente\n");
        printf("L\n"); // movimento em L
    }
    printf("frente\n");
    printf("diagonal\n");
    printf("diagonal\n");
}
// função para mover o bispo

void moverBispo() {
    for (int i = 0; i < 2; i++) printf("diagonal\n");
    for (int i = 0; i < 2; i++) {
        printf("frente\n");
        printf("L\n"); // movimento em L
    }
}
// função para mover a torre
void moverTorre() {
    for (int i = 0; i < 5; i++) printf("direita\n");
}

// função para mover o cavalo em L
void moverCavalo() {
   

    for (int i = 0; i < 2; i++) {
        printf("frente\n");
    printf("L\n"); // movimento em L
    }
    return;
}