#include <iostream>
using namespace std;
class student
{
protected:
    char Aa_name[20], Aa_sub1[20], Aa_sub2[20];
    int Aa_roll;

public:
    student() { cout << "Enter student details :- " << endl
                     << endl; }
    void read()
    {
        cout << "Enter name = ";
        cin >> Aa_name;
        cout << "Enter roll number = ";
        cin >> Aa_roll;
        cout << "Enter subject 1 = ";
        cin >> Aa_sub1;
        cout << "Enter subject 2 = ";
        cin >> Aa_sub2;
    }
    void display()
    {
        cout << endl
             << "Name :- " << Aa_name << endl;
        cout << "Roll number :- " << Aa_roll << endl;
        cout << "Subject 1 :- " << Aa_sub1 << endl;
        cout << "Subject 2 :- " << Aa_sub2 << endl;
    }
};
class marks : public student //derived from student
{
protected:
    int Aa_lab[2], Aa_Q[2], Aa_V[2];

public:
    void
    read()
    {
        student::read();
        cout << "Enter the Lab,Quiz,Viva marks" << endl
             << endl;
        cout << "Enter Lab record marks = " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cin >> Aa_lab[i];
        }
        cout << "Enter Quiz marks = " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cin >> Aa_Q[i];
        }
        cout << "Enter Viva marks = " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cin >> Aa_V[i];
        }
    }
    void display()
    {
        student::display();
        cout << endl
             << endl
             << "Lab record marks :- " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cout << Aa_lab[i] << endl;
        }
        cout << "Quiz marks :- " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cout << Aa_Q[i] << endl;
        }
        cout << "Viva marks :- " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cout << Aa_V[i] << endl;
        }
    }
};
class Cont_Eva
{
protected:
    int Aa_C[2];

public:
    void read()
    {
        cout << endl
             << endl
             << "Enter constant evaluation of 2 subjects are :- " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cin >> Aa_C[i];
        }
    }
    void display()
    {
        cout << endl
             << "Constant evaluation of 2 subjects are :- " << endl;
        for (int i = 0; i < 2; i++)
        {
            cout << i + 1 << ")";
            cout << Aa_C[i] << "\t" << endl
                 << endl;
        }
    }
};
class Result : public virtual marks, public Cont_Eva //derived from class marks and Cont_Eva
{
    int Aa_t[2];

public:
    result() { cout << "Total marks are" << endl
                    << endl; }
    void display()
    {
        marks::read();
        marks::display();
        Cont_Eva::read();
        Cont_Eva::display();
        for (int i = 0; i < 2; i++)
        {
            Aa_t[i] = Aa_lab[i] + Aa_Q[i] + Aa_V[i] + Aa_C[i];
            cout << endl
                 << "Total marks of subject " << i + 1 << " are :- " << Aa_t[i] << endl;
            cout << endl
                 << "CGPA of subject " << i + 1 << " are :- " << Aa_t[i] / 10 << endl;
        }
    }
};
int main()
{
    Result r; //Hybrid inheritance
    r.display();
    return 0;
}