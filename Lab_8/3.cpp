#include <iostream>
using namespace std;
class A
{
protected:
    int Aa_a;
};
class B : public A // derived from class A
{
protected:
    int Aa_b;

public:
    void read()
    {
        cout << "Enter number of both class A and B :- ";
        cin >> Aa_a >> Aa_b;
    }
    void dispaly()
    {
        cout << endl
             << "Number 1 :- " << Aa_a << endl;
        cout << "Number 2 :- " << Aa_b << endl;
    }
};
class C
{
protected:
    int Aa_c;

public:
    void read()
    {
        cout << "Enter number of class C :- ";
        cin >> Aa_c;
    }
    void dispaly() { cout << "Number 3 :- " << Aa_c << endl; }
};
class D : public B, public C //derived from class B and C
{
public:
    void large()
    {
        B::read();
        C::read();
        B::dispaly();
        C::dispaly();
        if (Aa_a > Aa_b && Aa_a > Aa_c)
        {
            if (Aa_b > Aa_c)
            {
                cout << endl
                     << "Second largest number is :- " << Aa_b;
            }
            else
            {
                cout << endl
                     << "Second largest number is :- " << Aa_c;
            }
        }
        else if (Aa_b > Aa_a && Aa_b > Aa_c)
        {
            if (Aa_a > Aa_c)
            {
                cout << endl
                     << "Second largest number is :- " << Aa_a << endl;
            }
            else
            {
                cout << endl
                     << "Second largest number is :- " << Aa_c << endl;
            }
        }
        else if (Aa_c > Aa_a && Aa_c > Aa_b)
        {
            if (Aa_a > Aa_b)
            {
                cout << endl
                     << "Second largest number is :- " << Aa_a;
            }
            else
            {
                cout << endl
                     << "Second largest number is :- " << Aa_b;
            }
        }
    }
};
int main()
{
    D d; //Hybrid inheritance
    d.large();
    return 0;
}