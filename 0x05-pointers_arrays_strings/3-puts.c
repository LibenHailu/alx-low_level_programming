#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 *
 * @str: store string.
 * Return: Always 0.
 */
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