#include <unistd.h>  // For read() and write() functions
#include <stdio.h>   // For perror() function

#define BUFFER_SIZE 100  // Defining a constant for the buffer size

// Function to split the input buffer at the first newline character and print parts
void	split_on_newline(char *buffer, ssize_t bytes_read)
{
	ssize_t	i;

	i = 0;  // Initialize index to traverse the buffer
	// Loop through the buffer to find a newline character
	while (i < bytes_read)
	{
		if (buffer[i] == '\n')  // Check if the current character is a newline
		{
			buffer[i] = '\0';  // Replace newline with null character to split the string
			// Print the first part of the buffer
			write(1, "Part 1: ", 8);
			write(1, buffer, i);
			write(1, "\n", 1);
			// Print the second part of the buffer after the newline
			write(1, "Part 2: ", 8);
			write(1, &buffer[i + 1], bytes_read - i - 1);
			write(1, "\n", 1);
			return ;  // Exit the function after splitting
		}
		i++;  // Increment the index to check the next character
	}
	// If no newline is found, print the whole buffer
	write(1, "No newline found. Input: ", 25);
	write(1, buffer, bytes_read);
	write(1, "\n", 1);
}

int	main(void)
{
	char	buffer[BUFFER_SIZE + 1];  // Buffer to store input, +1 for null terminator
	ssize_t	bytes_read;

	// Read input from standard input (file descriptor 0) into the buffer
	bytes_read = read(0, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)  // Check if reading input failed or nothing was read
	{
		write(2, "Error reading input\n", 20);  // Print error message to standard error
		return (1);  // Return 1 to indicate an error
	}
	buffer[bytes_read] = '\0';  // Null-terminate the buffer to make it a proper string
	// Call the function to split and print the buffer content
	split_on_newline(buffer, bytes_read);
	return (0);  // Return 0 to indicate success
}

