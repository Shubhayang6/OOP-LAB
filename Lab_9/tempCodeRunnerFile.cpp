#include <iostream>
using namespace std;

class Distance
{
private:
    int Sh_feet;
    int Sh_inches;

public:
    Distance()
    {
        Sh_feet = 0;
        Sh_inches = 0;
    }
    Distance(int f, int i)
    {
        Sh_feet = f;
        Sh_inches = i;
    }
    friend ostream &operator<<(ostream &output,
                               const Distance &D)
    {
        output << "F : " << D.Sh_feet << " I : " << D.Sh_inches;
        return output;
    }

    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.Sh_feet >> D.Sh_inches;
        return input;
    }
};

int main()
{
    Distance D1(11, 10), D2(5, 11), D3;

    cout << "Enter the value of object : " << endl;
    cin >> D3;
    cout << "First Distance : " << D1 << endl;
    cout << "Second Distance :" << D2 << endl;
    cout << "Third Distance :" << D3 << endl;

    return 0;
}