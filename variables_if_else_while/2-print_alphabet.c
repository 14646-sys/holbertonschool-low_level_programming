#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int lettre;

	lettre = 'a';
	while (lettre <= 'z')
	putchar(lettre++);
	putchar('\n');
return (0);
}
