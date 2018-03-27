#include <string>

using namespace std;

#pragma once
class Except
{
private:
	string message;
public:
	int type;
	Except();
	Except(int, const string);
	string getMessage();
};
