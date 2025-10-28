/* Vargas Rodriguez Carlos Antonio
ejercicio 3*/

#include <stdio.h>

int main()
{
  int num;
  printf ("Dame un numero: \n");
  scanf ("%d", &num);

  if(num % 2==0)
  {
    printf("El numero es par \n");
  
    if(num % 3==0)
    {
      printf("El numero es multiplo de 3");
    }
  }
  else
  {
    printf("El numero es impar");
  }
  return 0;
}
