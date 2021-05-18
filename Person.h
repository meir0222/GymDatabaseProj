#pragma once

class Person
{
private:

	const char* name;
	int ID;
	int age;

public:
	Person(char*,int,int);
	~Person();
	void setName(const char*);
	char* getName();
	void setID(int);
	int getID();
	void setAge(int);
	int getAge();

};
