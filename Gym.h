#pragma once
#include "member.h"
using namespace std;

class Gym: public member
{
private:
	//Peron class
	int numOfMembers;
	int price;

public:
	
	int getNumOfMembers();
	void setPrice(int);
	int getPrice();
	
};