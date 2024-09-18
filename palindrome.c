#include <stdio.h>

int palindrome (char *str)
{
	
	int x;
	int y;

	x = 0;
	y = 0;

	while (str[x] != '\0')
	{
	 if (str[x] >= 97 && str[x] <= 122)
	 {
		 str[x] = str[x] - 32;
	 }
	x++;
	}
	x--;

	while (x > y)
	{
		if (str[x] !=  str[y])
		{
			return 0;
		}
		if (str[x] == str[y])
		{
		x--;
		y++;
		}
	}
	return 1;
}

int main ()
{
char string[] = "ABAbA";
int result;

result = palindrome(string);

printf ("%d\n", result);

return 0;
}


