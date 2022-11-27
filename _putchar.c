#include <unistd.h>

/**
  *_putchar - Funciton
  *@c: parameter
  *Return: value
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
