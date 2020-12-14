#include <stdio.h>
#define MAX 10

int main (){
	int valores[MAX], num=0, cont=0, i=0;
	
	for(i=0;i<MAX;i++){
		printf("Int. um numero:\n");
		scanf("%i", &num);
		
		printf("Os multiplos de %i sao :\n", num);
		for(i=0;i<MAX;i++){
			if(valores[i]%num==0){
				printf("%i", valores[i]);
				cont ++;
			}
		}
		printf("Existem %i valores multiplos de %i\n:", valores, cont);
	}
}
