#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int lowercase = (int)'a';
while (lowercase <= (int)'z')
{
putchar(lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
