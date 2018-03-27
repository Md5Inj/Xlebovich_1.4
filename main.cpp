#include <iostream>
#include "List.h"
#include "Except.h"

using namespace std;

int main()
{
    try
    {
        List l(2);
        l.Print();
        cout << "l[0]: " << l[0].getFio() << endl;
        cout << "l.length(): " << l.Length() << endl;
        l.Sort();
        cout << "l.sort(): " << endl;
        l.Print();
        l.Replace();
        cout << "l.replace(): " << endl;
        l.Print();

    } catch(Except c) {
        cout << c.type << ": " << c.getMessage() << endl;
    } catch(...) {
        cout << "Error...";
    }

    system("pause");
    return 0;
}