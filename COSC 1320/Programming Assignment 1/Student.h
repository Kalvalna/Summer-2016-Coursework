#include <string>
using namespace std;

// Prototype for Student class
class Student
{
// Sets member variables except for numberOfStudents as private
private:
	// Declares variables firstName, lastName, and ID
	string firstName;
	string lastName;
	int ID;
// Sets member functions and static variable numberOfStudents as public
public:
	// Declares static variable for counting the numberOfStudents
	static int numberOfStudents;
	// Default constructor
	Student();
	// Constructor that takes three arguments
	Student(string, string, int);
	// Get function that retrieves student name
	string getName();
	// Get function that retrieves student ID
	int getID();
};

