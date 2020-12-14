#include <stdio.h>
#include <locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
	int x = 0;
	for(x = 0; x <= 1000; x++){
		printf("\n%d", x);
	}
	return 0;
}
