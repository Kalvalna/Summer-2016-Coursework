#ifndef DOG_H				
#define DOG_H
#include "Animal.h"

class dog :public Animal
{
private:
	string name;
	int age;
public:
	dog();
	dog(string, int);
	void setName(string);
	void setAge(int);
	string getName();
	int getAge();
	static int count;
	string speak();
};

#endif