#include "main.h"
/**
 * print_alphabet - This program prints "letter a-z".
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
