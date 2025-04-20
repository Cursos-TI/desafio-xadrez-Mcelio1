#include <stdio.h>

// Torre: move-se para a direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverRainha(casas - 1);
    }
}



int main(){

printf("*** Desafio do Xadres ***\n");

int Torre = 5;  // Move-se 5 casas para a direita
int Bispo = 5;  // Move-se 5 casas na diagonal (cima, direita)
int Rainha = 8; // Move-se 8 casas para a esquerda
int MovimentandoCavalo = 1; //Move - se 3 casas para baixo e esquerda. 
int movimentos = 1; //Move - se 3 casas para baixo e esquerda. 
 

//Movimentação da Torre 
// Ultilizando a estrutura de repetição for
printf("\n Movimento da torre\n");
for (int i = 0; i < Torre; i++)
{
   printf("Direita\n");
}
// Movimentação do Bispo
// Utiliza estrutura de repetição while
printf("\nMovimentando o Bispo:\n");
int i = 1;
while (i <= Bispo)
{
printf ("Cima, Direita\n");
    i++;
}
// Movimentação da Rainha
// Utiliza estrutura de repetição do-while
printf("\nMovimentando a Rainha:\n");

 i = 1; // Estava dando erro tirei o int deu certo.*
do
{
   printf("Esquerda\n");
   i++;
} while (i <= Rainha);

// Nível Aventureiro - Movimentação do Cavalo
// Utiliza duas estrutura aninhados
printf("\nMovimentação do Cavalo em L:\n");


while (MovimentandoCavalo --)
{
   for (int i = 0; i < 2; i++)
   {
    printf("Baixo\n"); //imprime "Baixo" duas vezes 
   }
   printf ("Esquerda\n"); // imprime "Esquerda" uma vez 
}

// Impressões separadas para clareza
// Recursividade (Torre, Bispo e Rainha) Nivel Mestre
printf("\n[Recursivo] Torre:\n");
moverTorre (Torre);

printf("\n[Recursivo] Bispo:\n");
moverBispo(Bispo);

printf("\n[Recursivo] Rainha:\n");
moverRainha(Rainha);

 // Loops Complexos - Cavalo em L (duas casas para cima e uma para a direita)

 printf("\n[Loops Complexos] Movimentação do Cavalo em L:\n");
 
 for (int i = 0; i < movimentos; i++) {
     for (int j = 2; j > 0; j--) {
         printf("Cima\n"); //imprime "Cima" duas vezes 
     }
     for (int i = 0; i < 1; i++) {
         printf("Direita\n"); // imprime "Direita" uma vez 
     }
 }

// Loops Aninhados - Bispo (diagonal: Cima + Direita)
printf("\n[Loops Aninhados] Movimentação do Bispo (Diagonal):\n");
for (int i = 0; i < Bispo; i++) { // externo vertical
    for (int j = 0; j <= i; j++) { //interno horizontal proporcional ao passo
        if (j == i) {
            printf("Cima, Direita\n"); //imprime vertical/ horizontal
        }
    }
}



return 0;
}