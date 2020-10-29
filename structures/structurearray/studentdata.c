#include "training.h"
#include <stdio.h>

/**
 * main - entry point function.
 * Return: 0 succes.
 */
int main(void)
{
	/*array initializacion*/
	infostudent cohort13[4] = {
		{"Andres", "Aristizabal", 13, 30.8},
		{"Lucho", "Patiño", 13, 30.4},
		{"Vane", "Garcia", 13, 25.5},
		{NULL, NULL, 0, '\0'},
	};
	printf("%s\n", cohort13[0].lastname);
	printf("%i\n", cohort13[3].course);
	return (0);
}
