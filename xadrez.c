#include <stdio.h>

int main() {
     
     int torreMove = 5, bispoMove = 5, rainhaMove = 8;

     printf("### Xadrez ###\n\n");
     
     printf("Movimentos da Torre:\n"); // 5 para direita
     for (torreMove; torreMove > 0; torreMove--) {
          printf("Direita\n");
     }

     printf("\nMovimentos do Bispo:\n"); // 5 na diagonal superior direita
     while (bispoMove > 0)
     {
          printf("Cima Direita\n");
          bispoMove--;
     }

     printf("\nMovimentos da Rainha:\n"); // 8 para esquerda
     do
     {
          printf("Esquerda\n");
          rainhaMove--;
     } while (rainhaMove > 0);
      
}