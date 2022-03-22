#include <stdio.h>
#include <string.h>
int string_length(char *pointer)
{
        int c = 0;

        while (*(pointer + c) != '\0')
        {
                c++;
        }
        return (c);
}


void print_rev(char *s)
{
	int i;

	i = string_length(s) - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";	
	print_rev(str);
	return (0);
}


