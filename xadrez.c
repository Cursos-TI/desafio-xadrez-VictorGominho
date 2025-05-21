#include <stdio.h>

void torreMove(int casas) {
     if (casas > 0) {
          printf("Direita\n");
          torreMove(casas - 1);
     }   
}

void rainhaMove(int casas) {
     if (casas > 0) {
          printf("Esquerda\n");
          rainhaMove(casas - 1);
     }   
}

void bispoMove(int casas) {
     int horizontal = 0, vertical = 0;
     while (vertical != casas) {
          printf("Cima ");
          vertical++;
          while (horizontal != vertical) {
               printf("Direita\n");
               horizontal++;
          }
     }
}

void cavaloMove(int vertical) {
     int casas = 0, horizontal = 0;
     
     if (vertical > 2)
     {
          return;
     }
     
     while (casas != 3)
     {
          printf("Cima\n");
          casas++;
          vertical--;
          while (casas != 3 && vertical == 0)
          {
               printf("Direita\n");
               casas++;
               horizontal--;
          }
          
     }
     
     

}

int main() {

     printf("### Xadrez ###\n\n");
     
     printf("Movimentos da Torre:\n"); // 5 para direita
     torreMove(5);

     printf("\nMovimentos do Bispo:\n"); // 5 na diagonal superior direita
     bispoMove(5);

     printf("\nMovimentos da Rainha:\n"); // 8 para esquerda
     rainhaMove(8);

     printf("\nMovimentos do Cavalo:\n"); // 2 para cima e 1 para direita
     cavaloMove(2); // Recebe número de movimentos na vertical
}