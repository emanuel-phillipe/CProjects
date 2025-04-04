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

  int num, i;

  printf("Insira um numero para ver a sua tabuada: ");
  scanf("%d", &num);

  for(i = 0; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num*i);
  }
 
  return 0;
}