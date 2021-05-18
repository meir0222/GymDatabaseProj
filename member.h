#pragma once
#include<iostream>
#include "Person.h"

class member : public Person
{
private:
	int pricePerMonth;
	char* memberType;
	char* memberSince;

public:
	member(char*,int);
	member(char*, int, int, char*, char*) 
	~member();
	void setPricePerMonth(int);
	int getPricePerMonth();
	void setMemberType(char*);
	char* getMemberType();
	void setMemberSince(char*);
	char* getMemberSince();
};