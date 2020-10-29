#include <stdio.h>
#include "training.h"

/**
 * main -entry point function.
 * Return: 0 succes.
 */
int main(void)
{
/*declaration - student1 variable with user defined datatype*/
	struct infostudent student1;

/*declaration - pointer with infostructure datatype*/
	struct infostudent *ptr_student1;

/*asign - pointer to loval variable both with the same datatype*/
	ptr_student1 = &student1;

	(*ptr_student1).firstname = "Alejo";
	(*ptr_student1).lastname = "Cedeño";
	ptr_student1->course = 13;
	ptr_student1->age = 25.8;
/*pointer must be casted inside parentesis*/
	printf("%s\n", (*ptr_student1).firstname);
	printf("%s\n", (*ptr_student1).lastname);
	printf("%i\n", student1.course);
	printf("%.2f\n", student1.age);

	return (0);
}
