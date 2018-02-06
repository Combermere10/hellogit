#include "Student.h"

Student::Student()
{
}

Student::Student(int Age, string name)
{
	StudentName = name;
	StudentAge = Age;
}

string Student::getName()
{
	return StudentName;
}

void Student::setName(string name)
{
	StudentName = name;
}

int Student::getAge()
{
	return StudentAge;
}

void Student::setAge(int Age)
{
	StudentAge = Age;
}
