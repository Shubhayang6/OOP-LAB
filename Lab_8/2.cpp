#include <iostream>
using namespace std;
class hour
{
protected:
    int Aa_hh;

public:
    void read()
    {
        cout << "Enter the time in hour =";
        cin >> Aa_hh;
    }
};
class minute
{
protected:
    int Aa_mm;

public:
    void read()
    {
        cout << endl
             << "Enter the time in minute =";
        cin >> Aa_mm;
    }
};
class second
{
protected:
    int Aa_ss;

public:
    void read()
    {
        cout << endl
             << "Enter the time in second =";
        cin >> Aa_ss;
    }
};
class time : public hour, public minute, public second //derived from hour and minute class
{
public:
    void display()
    {
        hour::read();
        minute::read();
        second::read();
        cout << endl
             << endl
             << "The time is :- " << Aa_hh << ":" << Aa_mm << ":" << Aa_ss << endl;
    }
};
int main()
{
    time t; //multiple inheritance
     t.display();
      return 0; 
      }