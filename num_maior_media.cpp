#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int x = 1;
	int cont = 0;
	int soma = 0;
	int maior = 0;
	
	while (x){
		printf("introduza o numero");
		scanf("%d", x);
		cont ++;
		x=x+x;
		printf("a soma é %d, a média é %d", x, x/cont);
	}
	return 0;
}
