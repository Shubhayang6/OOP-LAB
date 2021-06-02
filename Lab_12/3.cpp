#include <iostream>
#include <cstring>
using namespace std;
#define max 10
class array
{
	int arr[max];
public:
	class Range
	{
	};
	int &operator[](int i)
	{
		if (i < 0 || i >= max)
		{
			throw Range();
		}
		else
		{
		return arr[i];
		}
	}
};
int main()
{
	array a;
	try
	{
		a[1] = 10;
		a[15] = 60;
	}
	catch (array::Range)
	{
		cout << "out of bound";
	}
}