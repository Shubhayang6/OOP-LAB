#include <iostream> 
using namespace std;
 class vehicle
  {
      protected: char shu_name[20]; int shu_wheels; 
      public: void read() 
      {
          cout<<" Enter the name of vehicle = "; 
          cin>>shu_name; cout<<" Enter no. of wheels = "; 
          cin>>shu_wheels; 
          }
          void display() 
          {
              cout<<" Name :- "<<shu_name<<endl; cout<<" No. of wheels :- "<<shu_wheels<<endl; cout<<"*****************************************"<<endl;
               }
               };
               class lightmotor:public vehicle 
               {
                   protected: float shu_speed;

public:
void read_l()
{
    cout << "Enter the speed limit = ";
    cin >> shu_speed;
}
void display_l()
{
    cout << " Speed limit :- " << shu_speed << endl;
    cout << "***************************************" << endl;
}
}
;
class heavymotor : public vehicle
{
protected:
    char shu_cap[10];
    char shu_permit[10];
public:
    void read_h()
    {
        cout << "Enter load capacity = ";
        cin >> shu_cap;
        cout << "Enter permit = ";
        cin >> shu_permit;
    }
    void display_h()
    {
        cout << "Load capacity :- " << shu_cap << endl;
        cout << "Permit :- " << shu_permit << endl;
        cout << "**************************************" << endl;
    }
};
class gearmotor : public lightmotor
{
protected:
    int shu_gcount;
public:
    void read_g()
    {
        read();
        read_l();
        cout << " Enter gear count = ";
        cin >> shu_gcount;
    }
    void display_g()
    {
        display();
        display_l();
        cout << "\n Gear count : " << shu_gcount << endl;
    }
};
class nongearmotor : public lightmotor
{
public:
    void display_n()
    {
        cout << " There are 0 non gear moter" << endl;
        cout << "**************************************" << endl;
    }
};
class passenger : public heavymotor
{
protected:
    int shu_sitc, shu_standc;
public:
    void read_p()
    {
        read_h();
        cout << "Enter sitting capacity = ";
        cin >> shu_sitc;
        cout << "\n Enter standing capacity = ";
        cin >> shu_standc;
    }
    void display_p()
    {
        display_h();
        cout << "Sitting capacity :- " << shu_sitc << endl;
        cout << "\n Standing capacity :- " << shu_standc << endl;
        cout << "**********************************************" << endl;
    }
};
class goods : public heavymotor
{
protected:
    char shu_type[10];
public:
    void read_go()
    {
        cout << " Enter type of goods = ";
        cin >> shu_type;
    }
    void display_go()
    {
        cout << "Type of goods :- " << shu_type << endl;
        cout << "*************************************" << endl;
    }
};
int main()
{
    gearmotor g;
    nongearmotor n;
    passenger p;
    goods d;
    g.read_g();
    p.read_p();
    d.read_go();
    g.display_g();
    n.display_n();
    p.display_p();
    d.display_go();
}