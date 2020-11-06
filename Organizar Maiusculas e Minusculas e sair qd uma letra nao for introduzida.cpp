//Exercício 5
#include <stdio.h>

int main()
{
  char c, M[200], m[200];
  int i = 0, Mv = 0, mv = 0;

  while(1) {
    printf("Insira um caracter: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z') {
      M[Mv] = c;
      Mv++;
    } else if(c >= 'a' && c <= 'z') {
      m[mv] = c;
      mv++;
    }
    else break;

    fflush(stdin); // Clear `c` var
  }

  printf("Maisculas: ");
  for(i = 0; i<Mv; i++) printf("%c ", M[i]);
  printf("\nMinusculas: ");
  for(i = 0; i<mv; i++) printf("%c ", m[i]);
  
  return 0;
}
