#include <stdio.h>

int main() {
    int x = 0, y = 0; // Posição inicial comum

    // ===== Movimento do Bispo (diagonal superior direita - x++, y++) usando for =====
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Cima: %d\n", x, y);
    }

    // Reiniciando posição
    x = 0;

    // ===== Movimento da Torre (direita - x++) usando while =====
    printf("\nMovimento da Torre :\n");
    int i = 0;
    while (i < 5) {
        x++;
        printf("direita: %d\n", x, y);  // y permanece o mesmo
        i++;
    }

    // Reiniciando posição
    x = 0;

    // ===== Movimento da Rainha (esquerda - x--) usando do-while =====
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        x--;
        printf("Direita: %d\n", x, y);  // y permanece o mesmo
        i++;
    } while (i < 8);

    return 0;
}