#include "cat.h"

int cat::count = 0;

cat::cat()
{
	setName("");
	setAge(0);
	count++;
}
cat::cat(string name, int age)
{
	setName(name);
	setAge(age);
	count++;
}
void cat::setName(string a) { name = a; }
void cat::setAge(int a) { age = a; }
string cat::getName() { return name; }
int cat::getAge() { return age; }
string cat::speak() { return "MEOW"; }