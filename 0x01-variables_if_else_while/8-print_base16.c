#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 48;
int l = 'a';
while (n <= 57)
{
putchar(n);
n += 1;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
