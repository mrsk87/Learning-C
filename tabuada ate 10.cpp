//exercicio 2 tabuada de 10
#include <stdio.h>

int main (){
	int numero = 0, tab=1;
	
	for (tab=1; tab<=10; tab++){
		printf("\nTabuada do %i\n", tab);
		for (numero=1; numero<=10; numero++){
			printf("%i x %i = %i\n", tab, numero, numero*tab);
	}

	}
		return 0;
}
