#include <cstring>
#include <iostream>
#include "Phone.h"
#include "Except.h"

using namespace std;

Phone::Phone()
{
    this->num = 0;
}

int Phone::getNum()
{
    return this->num;
}

const char* Phone::getFio()
{
    return this->fio.c_str();
}

const char* Phone::getTariff()
{
    return this->tariff.c_str();
}

const char* Phone::getDate()
{
    return this->date.c_str();
}

void Phone::setFio(char* fio)
{
    this->fio = fio;
}

void Phone::setDate(char* date)
{
    this->date = date;
}

void Phone::setTariff(char* tariff)
{
    this->tariff = tariff;
}

void Phone::setNum(int num)
{
    this->num = num;
}

void Phone::Input()
{
    char buf[20];
    int num = 0;

    cout << "Input fio: "; 
    cin >> buf;
    if (strlen(buf) < 3 || strlen(buf) > 30) throw Except(10, "Too many symbols");
    this->setFio(buf); 

    cout << "Input date: ";
    cin >> buf; 
    if (strlen(buf) != 10) throw Except(10, "Too many symbols");
    this->setDate(buf);

    cout << "input tariff: "; 
    cin >> buf;
    if (strlen(buf) > 15 || strlen(buf) < 3) throw Except(10, "Too many symbols"); 
    this->setTariff(buf);
    
    cout << "Input number: ";
    cin >> num;
    if (num < 1000000 || num > 9999999) throw Except(10, "Too many symbols");
    this->setNum(num);
}

void Phone::Show()
{
    cout << "FIO: " << this->getFio() << endl
         << "Date: " << this->getDate() << endl
         << "Tariff: " << this->getTariff() << endl
         << "Number: " << this->getNum() << endl;
}