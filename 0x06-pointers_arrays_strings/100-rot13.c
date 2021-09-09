#include "main.h"

/**
 * rot13 - Encodes text with rot13
 * @a: string
 *
 * Return: returns pointer
 */

char *rot13(char *a)
{
int i, index;
char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

i = 0;
index = 0;
while (a[i])
{
if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
{
index = a[i] - 65;
a[i] = arr[index];
}
i++;
}
return (a);
}
