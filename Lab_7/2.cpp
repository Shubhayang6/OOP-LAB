#include <iostream>
using namespace std;
class publication
{
     char shu_title[20];
     int shu_price;

public:
     void read()
     {
          cout << "Enter the title = ";
          cin >> shu_title;
          cout << "Enter the price = ";
          cin >> shu_price;
     }
     void display()
     {
          cout << "Title :- " << shu_title << endl;
          cout << "Price :- " << shu_price << endl
               << endl;
     }
};
class sales
{
     int shu_d[3];

public:
     void read_s()
     {
          for (int i = 0; i < 3; i++)
          {
               cout << " Enter the sale detail for " << i + 1 << " month = ";
               cin >> shu_d[i];
          }
     }
     void display_s()
     {
          for (int i = 0; i < 3; i++)
          {
               cout << "Details of " << i + 1 << "month :- " << shu_d[i] << endl
                    << endl;
          }
     }
};
class pamphlet : virtual public publication
{
     int shu_size;

public:
     void read_p()
     {
          cout << "Enter the size of pamphlet = "
               << "A";
          cin >> shu_size;
     }
     void dispaly_p() { cout << "The size of pamphlet :- "
                             << "A" << shu_size << endl
                             << endl; }
};
class notice : virtual public pamphlet
{
     char shu_lib[20];

public:
     void read_n()
     {
          publication::read();
          pamphlet::read_p();
          cout << "**************************************" << endl;
          cout << "Whom to circulate = ";
          cin >> shu_lib;
     }
     void display_n()
     {
          publication::display();
          pamphlet::dispaly_p();
          cout << "Circulate the books to :- " << shu_lib << endl
               << endl;
     }
};
class book : public publication, public sales
{
     int shu_p;

public:
     void read_b()
     {
          sales::read_s();
          cout << "*************************************" << endl;
          cout << "Enter the number of pages = ";
          cin >> shu_p;
     }
     void display_b()
     {
          sales::display_s();
          cout << "Total number of pages :- " << shu_p << endl
               << endl;
     }
};
class tape : public publication, public sales
{
     int shu_t;

public:
     void read_t()
     {
          cout << "**************************************" << endl;
          cout << "Enter total play time = ";
          cin >> shu_t;
     }
     void dispaly_t()
     {
          cout << "Total play time :- " << shu_t << endl
               << endl;
     }
};
int main()
{
     book b;
     notice n;
     tape t;
     n.read_n();
     b.read_b();
     b.display_b();
     t.read_t();
     t.dispaly_t();
     n.display_n();
     return 0;
}