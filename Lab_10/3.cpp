#include <iostream>
using namespace std;
class Account_188
{
protected:
    int acc_no;
    char name[15];
    float bal, temp;

public:
    virtual void get_info() = 0;
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    virtual void display() = 0;
};
class Savings_188 : public Account_188
{
public:
    Savings_188()
    {
        bal = 1000;
    }
    void get_info()
    {
        cout << "Enter Account number:";
        cin >> acc_no;
        cout << "Enter name:";
        cin >> name;
    }
    void deposit()
    {
        cout << "Enter amount to be deposited:";
        cin >> temp;
        bal += temp;
    }
    void withdraw()
    {
        cout << "Enter amount of withdrawal:";
        cin >> temp;
        if (temp > bal)
            cout << "Impossible to withdraw" << endl;
        else if (bal - temp < 1000)
            cout << "Not possible because of minimum balance" << endl;
        else
            bal -= temp;
    }
    void display()
    {
        cout << "Account balance: " << bal << endl;
    }
};
class Current_188 : public Account_188
{
public:
    Current_188()
    {
        bal = 5000;
    }
    void get_info()
    {
        cout << "Enter Account number:";
        cin >> acc_no;
        cout << "Enter name:";
        cin >> name;
    }
    void deposit()
    {
        cout << "Enter amount to be deposited:";
        cin >> temp;
        bal += temp;
    }
    void withdraw()
    {
        cout << "Enter amount of withdrawal:";
        cin >> temp;
        if (temp > bal)
            cout << "Impossible to withdraw" << endl;
        else if (bal - temp < 5000)
            cout << "Not possible because of minimum balance" << endl;
        else
            bal -= temp;
    }
    void display()
    {
        cout << "Account balance: " << bal << endl;
    }
};
int main()
{
    Account_188 *a;
    Savings_188 s;
    Current_188 c;
    a = &s;
    cout << "Savings-------" << endl;
    a->get_info();
    a->deposit();
    a->withdraw();
    a->display();
    a = &c;
    cout << "Current-------" << endl;
    a->get_info();
    a->deposit();
    a->withdraw();
    a->display();
    return 0;
}