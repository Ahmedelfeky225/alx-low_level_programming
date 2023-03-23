#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
print_numbers();
return (0);
}

void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
{
	putchar(i);
	putchar('\n');
}
}
