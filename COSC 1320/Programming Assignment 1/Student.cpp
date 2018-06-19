#include "Student.h"

// Initialiize numberOfStudents counter to 0
int Student::numberOfStudents = 0;

// Default constructor function
Student::Student()
{
	// Only increments the counter
	numberOfStudents++;
}
// Constructor that takes 3 arguments
Student::Student(string first_name, string last_name, int ID_number)
{
	// Sets first name to the first string provided
	firstName = first_name;
	// Sets last name to the second string provided
	lastName = last_name;
	//Tests ID if negative
	// If ID is negative, set ID to 0
	if (ID_number < 0)
	{
		ID = 0;
	}
	// If ID is positive, set ID to int provided
	else
	{
		ID = ID_number;
	}
	// Increases the counter
	numberOfStudents++;
}
// getName function
string Student::getName()
{
	// Returns whole name with a space between
	return firstName + " " + lastName;
}
// getID function
int Student::getID()
{
	// Returns ID number
	return ID;
}