//exercicio 1 tabuada 8
#include <stdio.h>

int main (){
	int numero = 0;
	
/*	Com for

	for (numero=1; numero<=10; numero++){
		printf("8 x %i = %i\n", numero, numero*8);
	}*/
	//Com while
	numero = 1;
	while (numero<=10){
		printf("8 x %i = %i\n", numero, numero*8);
		numero ++;
	}
	return 0;
}
