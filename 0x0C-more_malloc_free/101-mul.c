#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */
void _puts(char *str)
{
  int i = 0;
  while (str[i])
    {
      _putchar(str[i]);
      i++;
    }
}
/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *s)
{
  int sign = 1;
  unsigned long int resp = 0, firstNum, i;
  for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
    {
      if (s[firstNum] == '-')
	{
	  sign *= -1;
	}
    }
  for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
    {
      resp *= 10;
      resp += (s[i] - 48);
    }
  return (sign *resp);
}
/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{
  unsigned  long int divisor = 1, i, resp;
  for (i = 0; n / divisor > 9; i++, divisor *= 10)
    ;
  for (; divisor >= 1; n %= divisor, divisor /= 10)
    {
      resp = n / divisor;
      _putchar('0' + resp);
    }
}
/**
 * main - print the result of the multiplication, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
  (void)argc;
  if (argc != 3)
    {
      _puts("Error ");
      exit(98);
    }
  print_int(_atoi(argv[1]) * _atoi(argv[2]));
  _putchar('\n');
  return (0);
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 * digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{
if (result[i])
a = 1;
if (a)
_putchar(result[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(result);
return (0);
}
