#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*
*/
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h <= 23; h++)
	{
		_putchar('0' + (h / 10));
		_putchar('0' + (h % 10));
		_putchar(':');
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
	_putchar('\n');
}
