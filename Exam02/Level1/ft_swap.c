#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a  = *b;
	*b = aux;
}
 

int main() {
    int x = 10;
    int y = 20;

    printf("Antes del intercambio: x = %d, y = %d\n", x, y);

    // Llamada a la función ft_swap para intercambiar los valores de x e y
    ft_swap(&x, &y);

    printf("Después del intercambio: x = %d, y = %d\n", x, y);

    return 0;
}
