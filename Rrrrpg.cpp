#include <stdio.h>


int main (){
	
	char nome [20];
	int hp = 10;
	int energia = 10;
	int xp = 0;
	int nivel = 0;
	char escolha;
	int menu = 1;
	
	printf("Bem vindo ao Rrrrrrpg, como te chamas?\n");
	scanf("%s", &nome);
	
	
	printf("Ola %s\n", nome);
	


	
	while (menu)
	{
	printf("Tens %d de Vida, %d de energia, %d de XP e estas no nivel %d\n", hp, energia, xp, nivel);
	printf("Escolhe a opçao pretendida:\n");
	printf("1. Dormir\n");
	printf("2. Comer\n");
	printf("3. Lutar\n");
	printf("4. Sair\n");
	printf("R: ");
	scanf("%c", &escolha);
	
	switch (escolha) {
		case '1':
			printf ("8h passaram e recuperaste vida total\n");
			hp = 10;
			//printf("Tens %d de Vida, %d de energia, %d de XP e estas no nivel %d", hp, energia, xp, nivel);
			break;
		case '2':
			printf ("Comeste uma deliciosa cabidela, recuperaste a energia toda.\n");
			energia = 10;
			//printf("Tens %d de Vida, %d de energia, %d de XP e estas no nivel %d", hp, energia, xp, nivel);
			break;
		case '3': break;
		case '4' : menu = 0;  break; return 0;
		default: printf("escolha errada\n"); break;
 		}
	}

	
	/*if (escolha = 4){
		menu = 0;
		break;
		}
	
	if (escolha = 1 ){
		if (hp < 10){
	
			printf ("8h passaram e recuperaste 5HP");
			hp = hp + 5;
			printf("Tens %d de Vida, %d de energia, %d de XP e estas no nivel %d", hp, energia, xp, nivel);
			
				} else {
					printf("Tens %d de Vida, nao podes recuperar mais", hp);
					
				}
	}
	if (escolha = 2){
		printf ("Comeste uma deliciosa cabidela, recuperaste 5 energia!");
		energia = energia + 5;
		printf("Tens %d de Vida, %d de energia, %d de XP e estas no nivel %d", hp, energia, xp, nivel);
		}
		
	*/
	

}

	
	
