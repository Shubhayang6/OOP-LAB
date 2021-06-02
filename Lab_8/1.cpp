#include <iostream>
using namespace std;
class base
{
protected:
    int Aa_num1;

public:
    base()
    {
        cout << "Base constructer" << endl
             << endl;
    }
    void read()
    {
        cout << "Enter the first number =";
        cin >> Aa_num1;
    }
    void display()
    {
        cout << endl
             << "Number 1 :- " << Aa_num1 << endl;
    }
};
class D1 : public base //Derived from base class
{
protected:
    int Aa_num2;

public:
    D1()
    {
        cout << "D1 constructer" << endl
             << endl;
    }
    void read()
    {
        cout << "Enter the second number =";
        cin >> Aa_num2;
    }
    void display()
    {
        cout << "Number 2 :- " << Aa_num2 << endl;
    }
};
class D2 : public D1 //derived from D1 class
{
protected:
    int Aa_num1;

public:
    D2()
    {
        cout << "D2 constructer" << endl
             << endl;
    }
    void read()
    {
        cout << "Enter the third number =";
        cin >> Aa_num1;
    }
    void display()
    {
        cout << "Number 3 :- " << Aa_num1 << endl;
    }
};
class largest : public D2 //derived from D2 class
{
    int Aa_l = 0;
public:
    largest()
    {
        cout << "Largest constructer" << endl
             << endl;
    }
    void large()
    {
        base::read();
        D1::read();
        D2::read();
        base::display();
        D1::display();
        D2::display();
        if (base::Aa_num1 < Aa_num2 && Aa_num2 > D2::Aa_num1)
        {
            Aa_l = Aa_num2;
            cout << endl
                 << "Largest number is :- " << Aa_l << endl;
        }
        else if (base::Aa_num1 > Aa_num2 && base::Aa_num1 > D2::Aa_num1)
        {
            Aa_l = base::Aa_num1;
            cout << endl
                 << "Largest number is :- " << Aa_l << endl;
        }
        else
        {
            cout << endl
                 << "Largest number is :- " << D2::Aa_num1 << endl;
        }
    }
};
int main()
{
    largest l; //multilevel inheritance
    l.large();
    return 0;
}