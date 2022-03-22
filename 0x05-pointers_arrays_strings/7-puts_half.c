#include <stdio.h>

int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}

void puts_half(char *str)
{
	int m, n, i, j;

	m = string_length(str) / 2;

	if (string_length(str) % 2 == 0)
	{
		for (i = m; i < string_length(str); i++)
		{
			putchar(str[i]);
		}
	}
	else if (string_length(str) % 2 != 0)
	{
		n = (string_length(str) - 1) / 2;
		for (j = n; j <= string_length(str); j++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}

int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}
