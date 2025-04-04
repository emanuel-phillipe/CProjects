#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "switchvogal.h"
#include "estacao.h"

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char exercisesMenu[2][40] = {"1 - Switch: Estacoes do Ano", "2 - Switch: Deteccao de Vogais"};
	int i = 0;
	int userDecision = 0;
	
	printf("\nExercicios - Emanuel Phillipe 2025/01\n");
	
	for(i = 0; i < sizeof(exercisesMenu) / sizeof(exercisesMenu[0]); i++){
		printf("%s \n", exercisesMenu[i]);
	}
	
	printf("\nSelecione o numero: ");
	scanf("%d", &userDecision);
	
	switch(userDecision){
		case 1:
			estacao();
			break;
		case 2:
			switchVogal();
			break;
	}
	
	return 0;
}
