#include <unistd.h>

int	main (int argc, char ** argv)
{
	int	i;
	
	i = 0;
	//Comprueba que el numero de argumentos este bien 
	if (argc == 2)
	{
		//Itera si empieza poor espacio o tabulacion
		while(argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		//si no empieza por eso, pintame cada caracter hasta llegar al espacio
		while ((argv[1][i] != 32 && argv[1][i] != 9) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
