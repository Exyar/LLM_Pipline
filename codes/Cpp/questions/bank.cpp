#include <iostream>
using namespace std;
class bank
{
    string name;
    int accno;
    int balance;
    int withd;
    int depo;

public:
    bank()
    {
        balance = 1000;
    }
    void diposit()
    {
        cout << "enter name: ";
        getline(cin >> ws, name);
        cout << "enter account no.: ";
        cin >> accno;
        cout << "amt want to deposit: ";
        cin >> depo;
        balance+=depo;
        /* cout << "enter balance: ";
        cin >> balance; */
    }
    void withdraw()
    {
        cout << "enter name: ";
        getline(cin >> ws, name);
        cout << "enter account no.: ";
        cin >> accno;
        cout << "amt want to withdraw: ";
        cin >> withd;
        balance-= withd;
    }
    void display()
    {
        cout << "name is: " << name << "balance is: " << balance;
    }
};
int main()
{
    bank b1, b2, b3;
    int c = 1;
    
    while (c == 1 || c == 2)
    {
        cout << "for deposit press: 1\n for withdrawal press: 2";
        cin >> c;
        if (c == 1)
        {
            b1.diposit();
        }
        if (c == 2)
        {
            b1.withdraw();
        }
    }
    b1.display();
    return 0;
}