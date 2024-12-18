#include <unistd.h>

// Function to find and print characters common between s1 and s2
void	inter(char *s1, char *s2)
{
	int	i, j, k;
	int	seen; // Flag to track if the character has already been printed

	i = 0;
	while (s1[i] != '\0') // Iterate through each character of s1
	{
		seen = 0; // Reset the 'seen' flag for the current character
		k = 0;
		while (k < i) // Check if s1[i] was already printed
		{
			if (s1[k] == s1[i]) // If s1[i] was already encountered
			{
				seen = 1; // Mark it as seen
				break;    // Exit the loop
			}
			k++;
		}
		// If the character hasn't been seen before, check if it exists in s2
		if (!seen) 
		{
			j = 0;
			while (s2[j] != '\0') // Iterate through each character of s2
			{
				if (s1[i] == s2[j]) // If a match is found
				{
					write(1, &s1[i], 1); // Print the character
					break;              // Stop searching further in s2
				}
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3) // Ensure exactly two arguments are passed
		inter(argv[1], argv[2]); // Call the inter function with the two strings
	write(1, "\n", 1); // Print a newline at the end
	return (0);
}
