//Exercício 4
#include <stdio.h>

main() {
  int i, num[10], m;

  for(i=0; i<10; i++) {
    printf("%d. Numero: ", i+1);
    scanf("%d", &num[i]);
  }

  printf("\nIntroduza um numero: ");
  scanf("%d", &m);
  printf("Numeros menores do que %d: ", m);

  for(i=0; i<10; i++) if(num[i] < m) printf("%d ", num[i]);
}
