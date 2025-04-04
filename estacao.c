#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estacao.h"

void estacao(){

  char estacao[10];
  int casoEstacao;
  printf("Digite a estacao do ano: ");
  scanf("%s", &estacao);

  if(strcmp(estacao, "inverno") == 0) casoEstacao = 1;
  else if(strcmp(estacao, "primavera") == 0) casoEstacao = 2;
  else if(strcmp(estacao, "verao") == 0) casoEstacao = 3;
  else if(strcmp(estacao, "outono") == 0) casoEstacao = 4;
  else casoEstacao = 0;

  switch(casoEstacao){
    case 1:
      printf("\nAi que frio, agora e inverno!");
      break;
    case 2:
      printf("\nJa vejo as flores pelo chao! E primavera.");
      break;
    case 3:
      printf("\nQue calor! E verao");
      break;
    case 4:
      printf("\nJa vejo as flores pelo chao! E primavera.");
      break;
    default:
      printf("\nTa achando que temos mais de 4 estacoes? Louco...");
      break;
  }
}