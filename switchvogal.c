#include <stdio.h>
#include <stdlib.h>
#include "switchvogal.h"

void switchVogal() {
	
	char letra;
	printf("\nDigite a letra: ");
	scanf(" %c", &letra);

	switch(letra){
		case 'a':
			printf("Vogal");
			break;
		case 'e':
			printf("Vogal");
			break;
		case 'i':
			printf("Vogal");
			break;
		case 'o':
			printf("Vogal");
			break;
		case 'u':
			printf("Vogal");
			break;
		default:
			printf("Consoante");
			break;
	}
}
