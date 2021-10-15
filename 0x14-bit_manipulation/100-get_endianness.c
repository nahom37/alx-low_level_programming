#include "main.h"

/**
 * get_endianness - Entry Point
 * Return: 0
 */

int get_endianness(void)

{
int x;
char *y;
x = 1;
y = (char *)&x;
return (*y);
}
