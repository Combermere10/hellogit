#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

int main()
{
	string name;
	int Age;
	vector <Student> myStudent;
	
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter Name and Age" <<endl;
		cout << "Name: "; cin >> name;
		cout << "Age: " ; cin >> Age;
		
		Student newStudent(Age, name);
		myStudent.push_back(newStudent);
    }
	
	
     for (int i = 0; i < 4; i++)
     {
		 cout << myStudent[i].getName() << "   " << myStudent[i].getAge() << endl;
	}
}
