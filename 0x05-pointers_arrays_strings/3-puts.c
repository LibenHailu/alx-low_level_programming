#include <stdio.h>

int _puts(const char *string)
{
    int i = 0;
   while(string[i]){
        if( putchar(string[i]) == EOF){ 
            return EOF;
        }
        i++;
    }
   if(putchar('\n') == EOF){
       return EOF;
   }
   return 1; 
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";	_puts(str);
	return (0);

}
