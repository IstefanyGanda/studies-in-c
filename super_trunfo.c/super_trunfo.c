#include <stdio.h>
//Use a string para definir um modelo que representa as características de uma carta.

int main() CartaSuperTrunfo {
char estado;
char codigo[4]; //Supondo um comprimento máximo de 3 caracterers +
char cidade[50];
int populacao;
};

/// @brief 
/// @param carta 
void lerCarta( CartaSuperTrunfo *carta) {

// Esta função solicitará ao usuário as informações para cada carta.

    printf("Digite o estado (uma letra de A a H): \n ");
    scanf(" %c", &carta->estado);
    printf("Digite o código da carta:");
    scanf(" %s", carta->codigo);
    printf("Digite o nome da cidade: \n ");
    scanf(" %s", carta->cidade);
    printf("Digite a população da cidade: \n ");
    scanf(" %d", &carta->populacao);

}

//Aqui chamaremos a função para ler os dados das duas cartas e depois exibiremos essas informações para o usuário.
    int main() {

         ("CartaSuperTrunfo carta1, carta2");
     
        printf("Insira os dados da primeira carta: \n");
        lerCarta("&carta1");
     
        printf("Insira os dados da segunda carta: \n");
        lerCarta("&carta2");
     
        printf("Dados da primeira carta:\n");
        printf("Estado: %c \nCódigo: %s \nCidade: %s \nPopulação: %d \n",
               carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao);
     
        printf("\nDados da segunda carta:\n");
        printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\n",
               carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao);
     
        return 0;
     }
