#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		if (lettre != 'q' && lettre  != 'e')
		putchar(lettre);
	lettre++;
}
	putchar('\n');
return (0);
}
