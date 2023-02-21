#include <unistd.h>
/**
 * main - print putchar
 * Return: 0 on success.
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
