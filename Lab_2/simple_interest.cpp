#include <iostream>
using namespace std;
float simple_interest(int pa, int n, int r=8.5)
{
	return (pa*n*8.5)/100;
}
int main()
{
	int pa, n, r;
	cout<<"Enter principal amount: ";
	cin>>pa;
	cout<<"Enter no. of years: ";
	cin>>n;
	cout<<"the rate of interest is 8.5"<<endl;
	cout<<"Hence, the Simple interest is= "<<simple_interest(pa, n, r);
	return 0;
}