#include <iostream>
using namespace std;
float Ar(float);
float Ar(int,int);
float Ar(float, float,float h=1.8);
int main()
{
	cout<<"Area of circle:"<<Ar(5);
	cout<<"\n\n Area of rectangle: "<<Ar(4,6);
	cout<<"\n\n Area of triangle :"<<Ar(3.6f,4.7f);
	return 0;
}
float Ar(float r)
{
	return(3.14*r*r);
	
}
float Ar(int a,int b)
{
	return(float)a*b;
}
float Ar(float a, float b, float h)
{
	return(h*a*b);
}