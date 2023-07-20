#include "main.h"
/**
 * main - determine if number is positive, negative or zero
(* 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{       
	if (i < 0)
		printf("%d is negative\n", i);

	else if (i > 0)
   
		printf("%d is positives\n", i);

	else

		printf("%d is zero\n", i);

}
