
BlackViking93
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
More
alx-low_level_programming/0x04-more_functions_nested_loops/10-print_triangle.c
@BlackViking93
BlackViking93 10-print_triangle.c
 History
 1 contributor
36 lines (31 sloc)  389 Bytes
 #include "main.h"

 /**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar(' ');
			ii++;
		}
		ii = 0;
		while (ii < i)
		{
			_putchar('#');
			ii++;
		}

		 _putchar('\n');
		i++;
	}
	if (i == 1)
{
		_putchar('\n');
}
}
