#include <stdio.h>

/**
 * main -entry point function.
 * Return: 0 succes.
 */
int main(void)
{
	struct infostudent student1;
	struct infostudent *ptr_student1;

	ptr_student1 = &student1;

	(*ptr_student1).firstname = "Alejo";
	(*ptr_student1).lastname = "Cedeño";
	ptr_student1->course = 13;
	ptr_student1->age = 25.8;

	printf("%s\n", (*ptr_student1).firstname);
	printf("%s\n", (*ptr_student1).lastname);
	printf("%i\n", student1.course);
	printf("%.2f\n", student1.age);

	return (0);
}
