#include <stdio.h>
/**
 * main 
 * Description: print lowercase alphabets
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 0; c < 26; c++)
        putchar('a' + c);

	putchar('\n');

	return (0);
}
