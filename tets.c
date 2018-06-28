#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
  int a;
  int b;

  printf("entrez votre âge\n");
  b = scanf("%d", &a);
  printf("%d\n", a);
  if (a >= 5 && a < 18)
    printf("Vous êtes un gamin\n");
  else
    printf("Vous êtes un grand garçon\n");
  return 0;
}
