#include <stdio.h>
/**
 * main - print alphabets in lowercase
 * Description: 'print alphabets lowercase'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
