#include <iostream>
#include <cstring>
using namespace std;
class number_114
{
public:
    int num;
    void read()
    {
        cout << "Enter value";
        cin >> num;
    }
    number_114() {}
    class Divide_114
    {
    };
    int div(number_114 num2)
    {
        if (num2.num == 0)
            throw Divide_114();
        else
        {
            int result = num / num2.num;
            cout << "result" << result;
        }
        return 0;
    }
};
int main()
{
    number_114 num1, num2;
    num1.read();
    num2.read();
    try
    {
        num1.div(num2);
    }
    catch (number_114::Divide_114)
    {
        cout << "Divide by zero";
    }
    class Divide_114
    {
    };
    class Number_114
    {
    };
    try
    {
        throw Divide_114();
    }
    catch (Divide_114)
    {
        cout << endl
             << "exception caught";
    }
    return 0;
}