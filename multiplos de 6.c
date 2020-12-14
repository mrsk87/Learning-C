//exercicio 4 multiplos de 6
#include <stdio.h>

int main (){
	int num = 0, conta=0;
	
	for (num=1;num<=200;num++){
		if(num%6==0){
			printf("%i\t", num);
			conta ++;
	}
}
	printf("Total = %\n", conta);
		return 0;
}
