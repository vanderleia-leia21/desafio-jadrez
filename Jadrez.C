#include <stdio.h>

int main() {
    int x = 0, y = 0; // Posição inicial comum

    // ===== Movimento do Bispo (diagonal superior direita x++, y++) usando for =====
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Movimento do Bispo:Para Cima\n");
        printf("Cima/esquerda: %d casa\n", x, y);
        printf("Cima/direita: %d casa\n", x,y);
        printf("Movimentodo Bispo: Para Baixo\n");
        printf("Baixo/esquerda: %d casa\n", x,y);
        printf("Baixa/direita: %d casa\n", x,y);
    
    }

    // Reiniciando posição
    x = 0;

    // ===== Movimento da Torre (direita x++) usando while =====
    printf("\nMovimento da Torre :\n");
    int i = 0;
    while (i < 5) {
        x++;
        printf("direita: %d casa\n", x, y);  // y permanece o mesmo
        i++;
    }

    // Reiniciando posição
    x = 0;

    // ===== Movimento da Rainha (esquerda x) usando do-while =====
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        x++;
        printf("Esquerda: %d casa\n", x, y);  // y permanece o mesmo
        i++;
    } while (i < 8);

    return 0;
}