//exercicio 3 multiplos de 6 de 5 a 200
#include <stdio.h>

int main (){
	int num = 0, conta=0;
	
	for (num=5;num<=200;num++){
		if(num%6==0){
			printf("%i"\t, num);
			conta ++;
	}
}
	printf("Total = %\n", conta);
		return 0;
}
