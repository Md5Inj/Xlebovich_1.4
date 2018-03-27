#include "Except.h"
#include "List.h"
#include <iostream>

using namespace std;

List::List(int length)
{
	if (length < 0) throw Except(1, "Negative digit");
	Phone m;
	for (int i = 0; i < length; i++)
	{
		m.Input();
		array.push_back(m);
	}
}

void List::Input()
{
	Phone m;
	m.Input();
	array.push_back(m);
}

int List::Length()
{
	return this->array.size();
}

void List::Sort()
{
	for (int i = 0; i < array.size() - 1; i++)
	{
		for (int j = 0; j < array.size() - i - 1; j++)
		{
			if (array[j].getNum() > array[j+1].getNum())
				swap(array[j], array[j + 1]);
		}
	}
}

void List::Replace()
{
	int index = 0;
	cout << "Input index: "; cin >> index;
	if (index < 0) throw Except(1, "Negative digit");
	if (index > this->Length()) throw Except(2, "Out of range");
    Phone m;
	m.Input();
	this->array[index] = m;
}

void List::Print()
{
	for (int i = 0; i < this->array.size(); i++)
	{
		cout << i << " ";
		this->array[i].Show();
	}
}

Phone List::operator[](int n)
{
	if (n < 0) throw Except(1, "Negative digit");
	if (n > this->Length()) throw Except(2, "Out of range");
	return this->array[n];
}