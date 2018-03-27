#include "Except.h"

Except::Except()
{
	this->type = 0;
	this->message[0] = 0;
}

Except::Except(int t, const string m)
{
	this->type = t;
	this->message = m;
}

string Except::getMessage()
{
	return this->message;
}