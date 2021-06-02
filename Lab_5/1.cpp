#include<iostream>
using namespace std;
class base
{
	public:
	int sh_x;
};
class derived:public base
{
	public:
		int sh_y;derived()
		{
			sh_y=678;
			sh_x=183;
		}
		void show()
		{
			cout<<sh_x<<endl<<sh_y<<endl;
		}
};
int main()
{
	derived d;
	derived a1();
	d.show();
}