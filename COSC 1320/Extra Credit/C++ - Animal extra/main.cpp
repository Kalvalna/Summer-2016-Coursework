#include <iostream>
#include <string>
#include "Animal.h"
#include "cat.h"
#include "dog.h"
using namespace std;

void main()
{
	dog d1, d2("John", 3);
	cat c1, c2("Jane", 4);

	cout << "Number of animals: " << Animal::count << endl;
	cout << "Number of cats: " << cat::count << endl;
	cout << "Number of dogs: " << dog::count << endl;

	cout << "\nCat 1:\nName: " << c1.getName() << "\nAge: " << c1.getAge() << endl;
	cout << "\nCat 2:\nName: " << c2.getName() << "\nAge: " << c2.getAge() << endl;
	cout << "\nDog 1:\nName: " << d1.getName() << "\nAge: " << d1.getAge() << endl;
	cout << "\nDog 2:\nName: " << d2.getName() << "\nAge: " << d2.getAge() << endl;

	cout << "\nA cat says " << c1.speak() << endl;
	cout << "A dog says " << d1.speak() << endl;

    system("pause");
}