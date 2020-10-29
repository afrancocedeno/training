#ifndef __TRAINING_H__
#define __TRAINING_H__

/**
 * struct infostudent - user defined datatype.
 * @firstname: pointer char with firstname.
 * @lastname: pointer char with lastname.
 * @course: int variable with course.
 * @age: intput variable with age.
 */

/*global structure, outside the main but not inside .c file*/
typedef struct infostudent
{
	char *firstname;
	char *lastname;
	int course;
	float age;
} infostudent;
#endif
