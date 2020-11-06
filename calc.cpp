#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num1 = 0 ;
	int num2 = 0 ;
	int total = 0 ;
	char opr;
	
	
	printf("Escolha a sua operacao:\n");
	printf("+ - / *\n");
	scanf(" %c", &opr);
	printf("Escolha o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Escolha o segundo numero:\n");
	scanf("%d", &num2);
	
	
	if ( opr == '+'){
		total = num1 + num2;
		printf("o valor total é: %d", total);
		
	} else if ( opr == '-'){
		total = num1 - num2;
		printf("o valor total é: %d", total); 
		
	} else if ( opr == '*'){
		total = num1 * num2;
		printf("o valor total é: %d", total);
		 
	} else if ( opr == '/'){
		total = num1 / num2;
		printf("o valor total é: %d", total); 
	
	} else {
		printf("o operador introduzido nao é valido");
	} 	

		
		
	}
