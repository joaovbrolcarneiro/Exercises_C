#include <unistd.h>

void ft_putnbr (int n)
{
	int i;
	char buffer[10];
	int is_negative;

	i = 0;
	is_negative = 0;

	if (n < 0)
	{
		is_negative = 1;
			n = -n;
	}

	if (n == 0)
	{
		buffer[i] = '0';
		i++;
	}
	else
	{
	while (n > 0)
	{
	buffer[i] = (n % 10) + '0';
	i++;
	n = n/10;
	}
	}

	if(is_negative)
	{
		buffer[i] = '-';
		i++;
	}

buffer[i] = '\0';

	int start = 0;
	int end = i -1;
	int temp = 0;

	while (start < end)
	{
	temp = buffer[start];
	buffer[start] = buffer[end];
	buffer[end] = temp;
	start++;
	end--;
	}

	write (1, buffer, i);
}

int main (int argc,char **argv)
{
	(void) argv;

	int n = argc - 1;

	ft_putnbr (n);

	return 0;
}
	
