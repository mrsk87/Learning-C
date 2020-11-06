//Exercício 3
#include <stdio.h>

main() {
  int i;
  float salario[12], total;

  for(i=0; i<12; i++) {
    printf("%d. Salario: ", i+1);
    scanf("%f", &salario[i]);
  }

  printf("\n");

  for(i=0; i<12; i++) {
    printf("%d. Salario: %.1f\n", i+1, salario[i]);
    total += salario[i];
  }

  printf("\nTotal anual: %.1f", total);
}
