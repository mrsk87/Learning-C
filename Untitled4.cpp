#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num[3] = {0,0,0} ;

	
		printf("Escolha a sua operacao:\n");
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	 printf("%d %d %d", num[0], num[1], num[2]);
	return 0;
	
}
