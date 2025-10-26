#include <stdio.h>

 int main(){
   int variavel;

   printf("Digite um  valor\n");
   scanf("%d",&variavel);

//Estudo da estrutura switch.Útil quando você tem muitas condições para verificar e deseja evitar uma longa sequencia de instruções if-else-if.

   switch (variavel){
   case 1:
   printf("Código a ser executado se variavel == valor1\n");
    break;
    case 2:
    printf("Código a ser executado se variavel == valor2\n");
    break;
    default://Código a ser executado se nenhum dos casos  acima for verdadeiro
    printf("Código a ser executado se a variável não for 1 ou 2\n");

   }


 }