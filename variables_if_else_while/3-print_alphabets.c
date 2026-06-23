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
	int letMaj;

	letMaj = 'A';
	lettre = 'a';
	while (lettre <= 'z')
	putchar(lettre++);
	while (letMaj <= 'Z')
	putchar(letMaj++);
	putchar('\n');
return (0);
}
