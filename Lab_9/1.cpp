#include <iostream>
using namespace std;

class unary
{
private:
    int shu;

public:
    void input(int sh_x)
    {
        shu = sh_x;
    }
    void display(void)
    {
        cout << "The value is: " << shu;
    }
    void operator-(void)
    {
        shu = -shu;
    }
};

int main()
{
    unary op;
    op.input(67);
    -op;
    op.display();
    cout << endl;
    return 0;
}