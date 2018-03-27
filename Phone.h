#include <string>

using namespace std;

class Phone {
private:
    int num;
    string fio;
    string tariff;
    string date;
public:
    Phone();    

    int getNum();
    const char* getFio();
    const char* getTariff();
    const char* getDate();

    void setFio(char* fio);
    void setDate(char* date);
    void setTariff(char* tariff);
    void setNum(int);

    void Input();
    void Show();
};