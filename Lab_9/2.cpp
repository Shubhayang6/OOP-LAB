#include <iostream>
using namespace std;

class Plus
{
private:
    int real, imag;

public:
    Plus(int sh_r = 0, int sh_i = 0)
    {
        real = sh_r;
        imag = sh_i;
    }
    Plus operator +(Plus const &obj)
    {
        Plus sum;
        sum.real = real + obj.real;
        sum.imag = imag + obj.imag;
        return sum;
    }
    void display()
    {
        cout <<"The number in complex format is:"<<endl;
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Plus c1(55, 13), c2(12, 8);
    Plus c3 = c1 + c2;
    c3.display();
}
