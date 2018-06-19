#ifndef CAT_H				
#define CAT_H
#include "Animal.h"

class cat :public Animal
{
private:
	string name;
	int age;
public:
	cat();
	cat(string, int);
	void setName(string);
	void setAge(int);
	string getName();
	int getAge();
	static int count;
	string speak();
};

#endif