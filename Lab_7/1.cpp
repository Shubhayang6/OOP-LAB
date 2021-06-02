#include <iostream> 
using namespace std;
 class student
  {
      protected:
       int shu_roll; char shu_branch[20]; 
       public: 
       void read ()
        { 
            cout << "Enter roll_no. = ";
             cin >> shu_roll; 
             cout << "Enter branch = "; 
             cin >> shu_branch;
              }
              void display () 
              { 
                  cout << "Roll number :-" << shu_roll << endl; cout << "Branch :-" << shu_branch << endl; 
                  }
                  };
                  class internal_mark:virtual public student
{
protected:
    int shu_subi1, shu_subi2;
public:
    void read_i()
    {
        cout << endl
             << "Enter subject 1 internal marks =";
        cin >> shu_subi1;
        cout << "Enter subject 2 internal marks =";
        cin >> shu_subi2;
        cout << "***********************************" << endl;
    }
    void display_i()
    {
        cout << "Each subject internal marks" << endl
             << endl;
        cout << "Subject 1 :- " << shu_subi1 << endl;
        cout << "Subject 2 :-" << shu_subi2 << endl;
    }
};
class external_mark : virtual public student
{
protected:
    int shu_sube1, shu_sube2;
public:
    void read_e()
    {
        cout << endl
             << "Enter subject 1 external marks =";
        cin >> shu_sube1;
        cout << "Enter subject 2 external marks =";
        cin >> shu_sube2;
        cout << "***********************************" << endl;
    }
    void display_e()
    {
        cout << "Each subject external marks" << endl
             << endl;
        cout << "Subject 1 :- " << shu_sube1 << endl;
        cout << "Subject 2 :-" << shu_sube2 << endl;
        cout << "***********************************" << endl;
    }
};
class result : public internal_mark, public external_mark
{
    int shu_total1, shu_total2;
public:
    void total_mark()
    {
        student::read();
        internal_mark::read_i();
        external_mark::read_e();
        shu_total1 = shu_subi1 + shu_sube1;
        shu_total2 = shu_subi2 + shu_sube2;
    }
    void display_t()
    {
        student::display();
        internal_mark::display_i();
        external_mark::display_e();
        cout << "The total marks :-" << endl
             << "Subject 1 total:- " << shu_total1 << endl
             << "Subject 2 total:- " << shu_total2 << endl;
    }
};
int main()
{
    result r;
    r.total_mark();
    r.display_t();
    return 0;
}