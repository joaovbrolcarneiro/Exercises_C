int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		// Find the end of the string
		while (av[1][i] != '\0')
			i++;

		// Trim trailing spaces or tabs
		while ((av[1][i - 1] == ' ' || av[1][i - 1] == '\t') && i != 0)
			i--;	

		// Trim the last word
		while (av[1][i - 1] != ' ' && av[1][i - 1] != '\t' && i != 0)
			i--;

		// Adjust position if the last space/tab was found
		if (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')
			i++;

		// Print the word
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{	
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
