#include <stdio.h>


int _strlen(char *str)
{
	int len = 0;

	while(*str != '\0'){
		len++;
		str++;
	}
	
	return len;
}

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n",len);
	return (0);
}
