#include <stdio.h>

int main() {
     
     int torreMove = 5, bispoMove = 5, rainhaMove = 8, cavaloMove1 = 2, cavaloMove2 = 1;

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

     printf("\nMovimentos do Cavalo:\n"); // 2 para baixo e 1 para esquerda
     for (cavaloMove2; cavaloMove2 > 0; cavaloMove2--) {
          while (cavaloMove1 > 0)
          {
               printf("Baixo\n");
               cavaloMove1--;
          }
          printf("Esquerda\n");
     }
}