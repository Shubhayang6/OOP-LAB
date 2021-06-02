#include<iostream>
using namespace std;
class base
{
	private:
	int sh_x,sh_y;
	public:
		base()
		{sh_x=45;
		sh_y=67;
		}
		void show_base()
		{
			cout<<"the data : "<< sh_x <<" "<< sh_y;
		}
};
class derived:public base
{
	public:
	
		void show_derived()
		{
			show_base();
		}
};
int main()
{
	derived d1;
		d1.show_derived();
		return 0;
}