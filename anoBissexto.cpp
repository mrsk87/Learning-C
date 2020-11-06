#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int ano = 0;
	int anoInicial = 1;
	int eBissexto = 0;
	int valido = 0;
	
	do{
		valido = 1;
		printf("\nIntroduza o ano: ");
		scanf("%d", &ano);
		
		while(getchar() != '\n'){
			valido = 0;
		}
		
		if(valido == 0){
			printf("\nO valor introduzido nao é um numero inteiro");
			continue;
		}
	}while(valido != 1);
	
	anoInicial = ano;
	
	while(!eBissexto){
		if((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){
			eBissexto = 1;
		}else{
			ano++;
		}
	}
	
	if(ano == anoInicial){
		printf("\nO ano introduzido %d bissexto.", ano);
	}else{
		printf("\nO proximo ano bissexto pós %d é: %d", anoInicial, ano);
	}
	
	return 0;
}
