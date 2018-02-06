#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
	private:
			string StudentName ;
			int StudentAge ;
	public:
	Student();
	Student(int ,string);
	string getName();
	int getAge();
	void setName(string );
	void setAge(int Age);
};



#endif
