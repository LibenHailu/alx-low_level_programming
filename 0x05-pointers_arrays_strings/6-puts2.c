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

void puts2(char *str)
{
	int i;

	for (i = 0; i < string_length(str); i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
