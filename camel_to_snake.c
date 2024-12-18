#include <unistd.h>

void	camel_to_snake(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z') // Check if it's an uppercase letter
		{
			write(1, "_", 1); // Write an underscore
			str[i] = str[i] + 32; // Convert to lowercase by adding 32
		}
		write(1, &str[i], 1); // Write the character
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1); // Always end with a newline
	return (0);
}
