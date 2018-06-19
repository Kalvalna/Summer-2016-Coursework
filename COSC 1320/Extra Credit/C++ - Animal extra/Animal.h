#ifndef ANIMAL_H				
#define ANIMAL_H
#include <iostream>
#include <string> 
using namespace std;

class Animal
{
public:
	Animal();
	static int count;
	virtual string speak() = 0;
};

#endif