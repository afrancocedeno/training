#include <stdio.h>
#include "training.h"

struct infostudent /*struct definition should be avoided in .c files, include this on the header*/
{
	char *firstname;
	char *lastname;
	int course;
	float age;
};

int main(void)
{
/*declaration - student1 variable with user datatype infostudent*/
	struct infostudent student1;

/*accesing to user defined datatype members (elements)*/
student1.firstname = "Alejo";
student1.lastname = "Cedeño";
student1.course = 13;
student1.age = 25.5;

printf("%s", student1.firstname);
printf("%s", student1.firstname);
printf("%s", student1.firstname);
printf("%s", student1.firstname);

	return (0);
}
