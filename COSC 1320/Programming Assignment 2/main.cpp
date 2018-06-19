#include <iostream>
#include <string>
using namespace std;
#include "animal.h"					// Include all header files to use the classes
#include "canine.h"
#include "cat.h"
#include "dog.h"
#include "feline.h"
#include "wolf.h"

void main()
{
	dog d1;							// Creates a dog, wolf, and cat with just the default constructor
	wolf w1;
	cat c1;
	dog d2("John");					// Creates a dog and cat with a name
	cat c2("Florence");
	animal *a[3];					// Creates an animal array
	a[0] = new dog;					// Stores a dog, cat, and wolf in the array
	a[1] = new cat;
	a[2] = new wolf;
	for (int i = 0;i < 3;i++)		// For loop that calles the speak function for each animal in the array
	{
		cout << (*a[i]).speak() << endl;
	}
	cout << w1.howl() << endl;		// Calls the howl function
	cout << "Number of animals: " << animal::count << endl;		// Displays the count for animals
	cout << "Number of canines: " << canine::count << endl;		// Displays the count for canines
	cout << "Number of felines: " << feline::count << endl;		// Displays the count for felines

	system("pause");
}	