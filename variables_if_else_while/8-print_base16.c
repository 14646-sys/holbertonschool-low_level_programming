#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char lettre;

	n = 0;
	lettre = 'a';
	while (n < 10)
	{
	putchar(n + '0');
	n++;
	}
	while (lettre <= 'f')
	{
	putchar(lettre);
	lettre++;
	}
	putchar('\n');
return (0);
}
