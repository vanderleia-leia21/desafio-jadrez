#include <stdio.h>

int main() {
    int x = 0, y = 0; // Posição inicial comum
    int movimentoCompleto= 1 ; //Pra controlar o movimento do cavalo

    // ===== Movimento do Bispo (diagonal superior direita x++, y++) usando for =====
    printf("Movimento do Bispo: Cima/Direita\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Cima/Direita: %d casa\n", x,y);
    }
    
     // Reiniciando posição
    x = 0;

    // ===== Movimento do Bispo (diagonal superior direita x++, y++) usando for =====
    printf("Movimento do Bispo: Cima/Esquerda\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
        printf("Cima/Esquerda: %d casa\n", x,y);
   
    }

 // Reiniciando posição
    x = 0;

     // ===== Movimento do Bispo (diagonal superior esquerda x++, y++) usando for =====
    printf("Movimento do Bispo: Baixa/Direita\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
    printf("Baixa/Direita: %d casa\n", x,y);
    }

 // Reiniciando posição
    x = 0;

     // ===== Movimento do Bispo (diagonal superior esquerda x++, y++) usando for =====
    printf("Movimento do Bispo: Baixa/Esquerda\n");
    for (int i = 0; i < 5; i++) {
        x++;
        y++;
    printf("Baixa/esquerda: %d casa\n", x, y);
    }

    // Reiniciando posição
    x = 0;

    // ===== Movimento da Torre (direita x++) usando while =====
    printf("\nMovimento da Torre:\n");
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
    i= 0;
    do {
        x--;
        printf("Esquerda: %d casa\n", x, y);  // y permanece o mesmo
        i++;
    } while (i < 8);
  // Reiniciando posição
    x = 0;
// ===== Movimento da Rainha (direita - x--) usando do-while =====
    printf("\nMovimento da Rainha(do-while):\n");
    i = 0;
    do {
        x--;
        printf("direita: %d casa\n", x, y);  // y permanece o mesmo
        i++;
    } while (i < 8);

// Reiniciando posição
    x = 0;
    while (movimentoCompleto--);
    {
     for(int i = 0, i = 2, i++) {
          printf("Cima\n"); //imprimir cima duas vezes
        }
          printf("Direita\n");//imprimir dereita uma vez
    }
    return 0;
}