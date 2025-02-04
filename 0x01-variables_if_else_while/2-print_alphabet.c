#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97; /* the ASCII number for 'a' */

	while (i <= 122) /* the ASCII number for 'z' */
	{
		putchar(i);
		i++;
	}
	putchar(10); /* the ASCII number for '\n' */

	return (0);
}
