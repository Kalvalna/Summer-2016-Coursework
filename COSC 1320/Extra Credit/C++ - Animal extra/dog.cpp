#include "dog.h"

int dog::count = 0;

dog::dog()
{
	setName("");
	setAge(0);
	count++;
}
dog::dog(string name, int age)
{
	setName(name);
	setAge(age);
	count++;
}
void dog::setName(string a) { name = a; }
void dog::setAge(int a) { age = a; }
string dog::getName() { return name; }
int dog::getAge() { return age; }
string dog::speak() { return "WOOF"; }
