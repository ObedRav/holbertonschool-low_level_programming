#include <stdio.h>
/**
 * main - print the sum of number multiplies of 3 or 5 below 1024
 *
 */
void main(void)
{
	int i, suma;

	for (i = 1; i <= 1024; i++)
	{
		if ((i % 3) == 0)
			suma += i;
		if ((i % 5) == 0)
			suma += i;
	}
	printf("%d", suma);
	putchar('\n');
}
