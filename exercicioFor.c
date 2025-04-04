#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

  // for(count = 0; count < 5; count++){
  //   printf("%d \n", count);
  // }

  // for(count = 0; count <= 20; count += 2 ) {
  //   printf("%d\n", count);
  // }

  // for(count = 3; count >= 0; count--){
  //   printf("%d\n", count);
  // }

  // for(i = 1; i <= 100; i++){
  //   soma += i;
  // }

  // printf("A soma dos numeros de 1 a 50 e igual a: %d\n", soma);

  // int num, i;

  // printf("Insira um numero para ver a sua tabuada: ");
  // scanf("%d", &num);

  // for(i = 0; i <= 10; i++) {
  //   printf("%d x %d = %d\n", num, i, num*i);
  // }

  // int i;

  // for(i = 1; i <= 10; i++) {
  //   if(i%2 == 0) printf("%d e um numero par!\n", i);
  //   else printf("%d e um numero impar!\n", i);
  // }

  char string[100];
  char charToCompare;

  int i = 0;
  int count = 0;

  printf("Digite uma frase: ");
  fgets(string, sizeof string, stdin);

  printf("\nDigite uma letra para comparacao: ");
  scanf("%c", &charToCompare);

  while(string[i] != (sizeof string)+1){ // ADICIONANDO UM PQ ELE NN LÊ O ÚLTIMO CHAR (SLA O PQ)
    if(string[i] == charToCompare) count++;
    i++;
  }

  printf("Existem %d %c's na frase.", count, charToCompare);
 
  return 0;
}