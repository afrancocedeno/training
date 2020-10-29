#include <stdio.h>
#include "training.h"

/**
 * main - entry point function.
 * Return: (0) for succes function.
 */

int main(void)
{
/*declaration - student1 variable with user datatype infostudent*/
	struct infostudent student1;
	
/*accesing to user defined datatype members (elements)*/
	student1.firstname = "Alejo";
	student1.lastname = "Cedeño";
	student1.course = 13;
	student1.age = 25.5;
	
	printf("%s\n", student1.firstname);
	printf("%s\n", student1.lastname);
	printf("%i\n", student1.course);
	printf("%.2f\n", student1.age);
	
	return (0);
}
