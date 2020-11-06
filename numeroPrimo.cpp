#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int numero = 0;
	int valido = 1;
	
	do {
	
		printf("\nIntoroduza um numero positivo: ");
		scanf("%d", &numero);
		while(getchar() != '\n'){valido = 0;}
		
		if(!valido){ //!valido é igual a valido == 0, Operaçao verdadeira booleana
			printf("\nO valor introduzido nao é um numero inteiro.");
			continue;
		}
			
		if(numero <= 0){
			printf("\nOnumero deve ser positivo");
		}
	}while(numero <= 0);
		
	int x = 0;
	int ePrimo = 1;
	for(x = 2; x < numero/2; x++){
		if(numero % x == 0){
			ePrimo = 0;
			break;
		}	
	}
	
	if(ePrimo == 1){
		printf("\nO numero é primo.");
	}else {
		printf("\nO numero nao é primo.");
	}
	return 0;
}
