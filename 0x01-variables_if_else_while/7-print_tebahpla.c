#include <stdio.h>
/**
* main - prints lowercase alphabets in reverse
*        reverse lowercase alphabets
* Return: Always (Success)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
putchar('\n');
return (0);
}

