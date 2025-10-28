/* Vargas Rodriguez Carlos Antonio
ejercicio 5 */

#include <stdio.h>

int main()
{
    const float PRECIO_ENTRADA = 7.0; // Precio base
    int edad;
    float precio_final;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // Primer if general
    if (edad < 5 || edad > 60)
    {
        // if anidado para distinguir entre menores y mayores
        if (edad < 5)
        {
            precio_final = PRECIO_ENTRADA * (1 - 0.60);
            printf("Tiene menos de 5 años, aplica 60%% de descuento.\n");
        }
        else
        {
            precio_final = PRECIO_ENTRADA * (1 - 0.55);
            printf("Tiene mas de 60 años, aplica 55%% de descuento.\n");
        }
    }
    else
    {
        precio_final = PRECIO_ENTRADA;
        printf("No aplica descuento.\n");
    }

    printf("El precio final de la entrada es: %.2f Euros\n", precio_final);

    return 0;
}
