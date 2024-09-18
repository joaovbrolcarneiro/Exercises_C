#include <unistd.h>

void putnbr (int n)
{
	int i = 0;
	char buffer[10];

	while (n > 0)
		{
		buffer[i] = n % 10 + '0';
		i++;
		n=n/10;
		}	
	
	buffer[i] = '\0';

	int start = 0;
	int end = i -1;
	int temp;

	while (start < end)
	{
		temp = buffer[start];
		buffer[start] = buffer[end];
		buffer[end] = temp;
		start++;
		end--;
	}

	int x = 0;
	while (x < i)
	{
		write (1, &buffer[x], 1);
		x++;
	}
}
int main ()
{
	int n = 123;
	putnbr(n);

	return 0;
}

