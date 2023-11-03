#ifndef STUDENTS_H
#define STUDENTS_H

//definition of struct type "Students"
struct Students{
	char lastName[20];
	char firstName[20];
	int id; 
	Students();
	void printStudent();
};

#endif
