#include <unistd.h>

void write_number(int number)
{
	char	str[10] = "0123456789";

	if (number > 9)
		write_number(number / 10);
	write (1, &str[number % 10], 1);
}

int main()
{
	int num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (num % 3 == 0)
		   write (1, "fizz", 4);
		else if (num % 5 == 0)
			write (1, "buzz", 4);
		else 
			write_number(num);
		num++;
		write (1, "\n",  1);
	}
}
