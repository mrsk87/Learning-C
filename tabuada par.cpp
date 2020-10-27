//exercicio 3 tabuada par
#include <stdio.h>

int main (){
	int numero = 0, tab=1;
	
	for (tab=2; tab<=10; tab=tab+2){
		printf("\nTabuada do %i\n", tab);
		for (numero=1; numero<=10; numero++){
			printf("%i x %i = %i\n", tab, numero, numero*tab);
	}

	}
		return 0;
}
