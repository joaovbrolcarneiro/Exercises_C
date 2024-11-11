#include <unistd.h> // for read and write
#include <stdio.h>  // for printf

#define BUFFER_SIZE 100

int main(void)
{
    char buffer[BUFFER_SIZE + 1]; // Buffer to hold input, +1 for null-terminator
    ssize_t bytes_read;

    // Read up to BUFFER_SIZE characters from standard input (fd = 0)
    bytes_read = read(0, buffer, BUFFER_SIZE);

    if (bytes_read < 0)
    {
        perror("Error reading input");
        return 1;
    }

    // Null-terminate the string to safely print it as a string
    buffer[bytes_read] = '\0';

    // Print the read data using write
    write(1, "You entered: ", 13);
    write(1, buffer, bytes_read);

    return 0;
}
