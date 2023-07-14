#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int lowercase = (int)'a';
int uppercase = (int)'A';
while (lowercase <= (int)'z')
{
putchar(lowercase);
lowercase += 1;
}
while (uppercase <= (int)'Z')
{
putchar(uppercase);
uppercase += 1;
}
putchar('\n');
return (0);
}
