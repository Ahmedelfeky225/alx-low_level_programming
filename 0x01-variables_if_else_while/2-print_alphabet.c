#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (char low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (char upper = 'A'; upper <= 'Z'; ++upper)
		putchar(upper);
		putchar('\n');

	return (0);
}
