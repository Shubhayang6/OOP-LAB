#include <iostream>
using namespace std;

class increment
{
private:
    int value;

public:
    increment(int sh_c)
    {
        value = sh_c;
    }

    friend increment operator++(increment &S);

    void display()
    {
        cout << " The value is : " << value << endl;
    }
};
increment operator++(increment &S)
{
    ++S.value;
    return S;
}
int main()
{
    int i = 0;
    increment S1(500);

    for (i = 0; i < 2; i++)
    {
        ++S1;
        S1.display();
    }

    return 0;
}