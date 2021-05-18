#include<iostream>
#include "member.h"
#include<time.h>

using namespace std;

member::member()
{
	pricePerMonth = 260;
	memberType = "Standard";
	memberSince=
}

member::member(char* name, int ID, int age, int pricePerMonth, char* memberType, char* memberSince)
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
