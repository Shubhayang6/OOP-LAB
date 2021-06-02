#include<iostream>
#include<math.h>
using namespace std;

class TwoD
{
	int x_co,y_co;
	public:
		TwoD()
		{
			x_co=0;
			y_co=0;
		}
		void read()
		{
			cout<<"\n Enter x coordinate. : ";
			cin>>x_co;
			cout<<"\n Enter y coordinate. : ";
			cin>>y_co;
		}
		void display()
		{
			cout<<"\n Coordinates are  x:"<<x_co<<" , y:"<<y_co;
		}
		TwoD operator -(TwoD t2)
		{
			TwoD temp;
			temp.x_co= x_co - t2.x_co;
			temp.x_co=(temp.x_co)*(temp.x_co);
			temp.y_co= y_co - t2.y_co;
			temp.y_co=(temp.y_co)*(temp.y_co);
			return temp;
		}

		int add()
		{
			return x_co+y_co;
		}
};
int main()
{
	TwoD t1,t2,re;
	float dist;
	cout<<"\n Enter 1st coordinates";
	t1.read();
	cout<<"\n enter 2nd coordinates";
	t2.read();
	re=t1-t2;
	dist= re.add();
	dist=sqrt(dist);
	cout<<"\n Distance between two coordinates = "<<dist;
	return 0;
}