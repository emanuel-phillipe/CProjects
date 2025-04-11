#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  
  char string[100];
  char charToCompare;

  int i = 0;
  int count = 0;

  printf("Digite uma frase: ");
  fgets(string, sizeof string, stdin); // outra forma de pegar dados do usuário, TEM QUE ESPECIFICAR O TAMANHO!!!!

  printf("\nDigite uma letra para contar: ");
  scanf("%c", &charToCompare);

  while(string[i] != '\0'){ // "\0" representa tipo um "último caractere" dentro do array!!!!!
    if(string[i] == charToCompare) count++;

    i++;
  }

  printf("Existem %d %c's na frase.", count, charToCompare);
 
  return 0;
}