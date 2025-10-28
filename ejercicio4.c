/* Vargas Rodriguez Carlos Antonio
ejercicio 4*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Dame el primer numero: ");
    scanf("%d", &num1);

    printf("Dame el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("El primer numero (%d) es mayor que el segundo (%d).\n", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("El segundo numero (%d) es mayor que el primero (%d).\n", num2, num1);
    }
    else
    {
        printf("Ambos numeros son iguales (%d).\n", num1);
    }

    return 0;
}
