#include "Phone.h"
#include <vector>

using namespace std;

#pragma once
class List
{
private:
	vector<Phone> array;
public:
	List(int length);
	void Input();
	int Length();
	void Sort();
	void Replace();
	void Print();
	Phone operator[](int n);
};
