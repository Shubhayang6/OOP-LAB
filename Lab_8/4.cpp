#include <iostream>
using namespace std;
class A
{
protected:
    int Aa_num1, Aa_fact = 1, i;

public:
    A()
    {
        cout << "Enter the first number =";
        cin >> Aa_num1;
    }
    void display() { cout << endl
                          << "Number 1 :- " << Aa_num1 << endl; }
    void factorial()
    {
        for (int i = 1; i <= Aa_num1; ++i)
        {
            Aa_fact = Aa_fact * i;
        }
        cout << endl
             << "Factorial of " << Aa_num1 << " = " << Aa_fact << endl;
    }
};
class C : public virtual A //derived from class A
{
protected:
    int Aa_num2;

public:
    C()
    {
        cout << "Enter the third number =";
        cin >> Aa_num2;
    }
    void display() { cout << "Number 3 :- " << Aa_num2 << endl; }
};
class B : public virtual A //derived from class A
{
protected:
    int Aa_num1;
public:
    B()
    {
        cout << "Enter the second number =";
        cin >> Aa_num1;
    }
    void display() { cout << "Number 2 :- " << Aa_num1 << endl; }
};
class D : public B,
          public C //derived from class B and C
{
    int Aa_l = 0;

public:
    void largest()
    {
        A::factorial();
        A::display();
        B::display();
        C::display();
        if (A::Aa_num1 < Aa_num2 && Aa_num2 > C::Aa_num1)
        {
            Aa_l = Aa_num2;
            cout << endl
                 << "Largest number is :- " << Aa_l << endl;
        }
        else if (A::Aa_num1 > Aa_num2 && A::Aa_num1 > C::Aa_num1)
        {
            Aa_l = A::Aa_num1;
            cout << endl
                 << "Largest number is :- " << Aa_l << endl;
        }
        else
        {
            cout << endl
                 << "Largest number is :- " << C::Aa_num1 << endl;
        }
    }
};
int main()
{
    D d; // Multipath inheritance
    d.largest();
    return 0;
}