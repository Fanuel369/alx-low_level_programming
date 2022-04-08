#include <stdio.h>
/**
  * main - prints numbers from zero
  *        numbers from start
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
