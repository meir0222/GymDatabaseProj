#include<iostream>
#include "member.h"

using namespace std;

member::member(char* memberSince) :Person(char* name, int ID, int age);
{

	pricePerMonth = 260;
	memberType = "Standard";
	this->memberSince = memberSince;
}

member::member(char* name = "", int ID = 100000000, int age = 16, int pricePerMonth, char* memberType, char* memberSince)
{

	this->pricePerMonth = pricePerMonth;
	this->memberType = memberType;
	this->memberSince = memberSince;
}

member::~member()
{

}

void member::setPricePerMonth(int pricePerMonth)
{
	this->pricePerMonth = pricePerMonth;
}

int member::getPricePerMonth()
{
	return pricePerMonth;
}

void member::setMemberType(char* memberType)
{
	this->memberType = memberType;
}

char* member::getMemberType()
{
	return memberType;
}

void member::setMemberSince(char* memberSince)
{
	this->memberSince = memberSince;
}

char* member::getMemberSince()
{
	return memberSince;
}
