#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int x= 0;
	int multiplicacao = 6;
	
	for (x = 2; multiplicacao <200 && multiplicacao > 5; x++){
		printf("\n%d", multiplicacao);
		multiplicacao = x * 6;
	}
	return 0;
}
