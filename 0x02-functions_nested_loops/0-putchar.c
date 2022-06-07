#include "main.h"
/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int _putchar(char c)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 9; i++)
		{
		_putchar(p[i]);
		}
		_putchar('\n');
	return (0);
}
