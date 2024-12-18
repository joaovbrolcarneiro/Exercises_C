#include <unistd.h>
#include <stdlib.h>

void putnbr(int number)
{
    char c;

    if (number < 0)
    {
        write(1, "-", 1);
        number = -number;
    }
    if (number > 9)
        putnbr(number / 10);
    c = (number % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 4) // Check for the correct number of arguments
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[3]);
        char op = argv[2][0];

        if (op == '+')
            putnbr(a + b);
        else if (op == '-')
            putnbr(a - b);
        else if (op == '*')
            putnbr(a * b);
        else if (op == '/')
        {
            if (b != 0) // Avoid division by zero
                putnbr(a / b);
        }
        else if (op == '%')
        {
            if (b != 0) // Avoid modulo by zero
                putnbr(a % b);
        }
    }
    write(1, "\n", 1); // Always end with a newline
    return 0;
}

