#include <stdio.h>

int main (){
	
	int numero = 0 ;
	printf("insira o numero:");
	scanf("%d", &numero);
	
	if (numero % 2 == 0 && numero % 5 == 0){
		printf("numero divisivel por 2 e 5");
	}else {
		printf ("o numero nao e divisivel por 2 nem 5");
	}
	
	return 0;


}
