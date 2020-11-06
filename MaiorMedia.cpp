#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int maior = 0;
	int cont = 0;
	int soma = 0;
	int ultimoNum = -1;
	int valido = 1;
	
	do{
		valido = 1;
		printf("\nIntroduza o num int positivo:\n");
		int x = scanf(" %d", &ultimoNum);
		if(x == 0){
			while (getchar() != '\n'){}
			printf("\nO valor lido nao é numero inteiro");
			soma = soma - ultimoNum;
			cont = cont - 1;
			continue;
		}
		if(ultimoNum > 0){
			soma = soma + ultimoNum;
			cont++;
			if (ultimoNum > maior){
				maior = ultimoNum;
			}
		} else if (ultimoNum < 0){
			printf("\nOnumero introduzido deve ser maior que 0.");
		}
	}while(ultimoNum != 0);
		if(cont > 0){
			printf("\n\nMédia: %.2f", (float)soma/cont);
			printf("\nMarior: %d", maior);
	}else {
		printf("\nNão foi iuntroduzido nenhum numero");
	
	}
	return 0;
}
