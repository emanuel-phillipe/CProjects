#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  // O que foi aprendido:
  // - WHILE{}
  //- DO{}WHILE()

  // EXERCÍCIO - 00

  // while(i <= 5){
  //   printf("%d \n", i);
  //   i++;
  // }

  // -------------------------------------------------------------------------------------------------------------
  // EXERCÍCIO - 01

  // while(i > 0){
  //   sleep(1);
  //   printf("%d \n", i);
  //   i--;
  // }

  // printf("FOGO!!!");

  // -------------------------------------------------------------------------------------------------------------
  // EXERCÍCIO - 02

  // int writtenNumbers[100] = {0};
  // int userNumber;
  // int count = 0;

  // printf("Digite números, ou 0 para sair: ");
  // scanf("%d", &userNumber);

  // while(userNumber != 0){
  //   writtenNumbers[count] = userNumber;
  //   printf("\n Voce digitou o numero %d \n", userNumber);
  //   scanf("%d", &userNumber);
  //   count++;
  // }

  // printf("Voce digitou %d numeros", count);

  // -------------------------------------------------------------------------------------------------------------
  // EXERCÍCIO - 03

  // int correctPassword = 505617;
  // int currentPassword = 0;
  // int count = 1;

  // while(count < 4){
  //   printf("Digite a %dª tentativa: ", count);
  //   scanf("%d", &currentPassword);

  //   if(currentPassword == correctPassword) {
  //     printf("\n\e[0;32mAcesso Permitido! Bem vindo usuario!\n");
  //     return 0;
  //   }else {
  //     printf("\nSenha incorreta!\nVoce tem mais \e[1;33m%d\e[0;37m tentativas.\n", 3-count);
  //   }
  //   count++;
  // }

  // printf("\n\e[1;37mAcesso negado, a terceira tentativa foi excedida.\e[0;37m\n");

  // -------------------------------------------------------------------------------------------------------------
  // EXERCÍCIO - 04

  // int userAge;

  // printf("\nPor favor, digite sua idade: ");
  // scanf("%d", &userAge);

  // while(1){
  //   if(userAge > 1 && userAge < 110){
  //     if(userAge >= 18) printf("Voce e maior de idade!");
  //     else printf("Voce e menor de idade!");

  //     break;
  //   }else{
  //     printf("Idade invalida. Voce so pode ter entre 1 e 110 anos.");
  //     printf("\nPor favor, digite sua idade: ");
  //     scanf("%d", &userAge);
  //   }
  // }

  // int opcao = -1;

  // while(opcao != 0) {
  //   printf("\nMenu de Opcoes\n");
  //   printf("\n1- Opcao 1");
  //   printf("\n2- Opcao 2");
  //   printf("\n0- Sair\n");

  //   printf("Faca sua escolha: ");
  //   scanf("%d", &opcao);

  //   switch(opcao){
  //     case 1: 
  //       printf("\nPrimeira opcao\n");
  //       break;
  //     case 2:
  //       printf("\nSegunda opcao\n");
  //       break;
  //     case 0:
  //       printf("\nSaindo do programa\n");
  //       sleep(1);
  //       printf(".");
  //       sleep(1);
  //       printf(".");
  //       sleep(1);
  //       printf(".");
  //       break;
  //     default:
  //       printf("\nOpcao nao disponivel\n");
  //       break;
  //   }
  // }

  return 0;
}