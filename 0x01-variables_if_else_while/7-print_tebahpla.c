#include <stdio.h>
/**
* main
* prints lowercase alphabets reverse
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
