//general throw catch
#include <iostream>
using namespace std;
int general()
{
    int n1, n2, result;

    cout << "\nEnter the 1st number : " << endl;
    cin >> n1;

    cout << "\nEnter the 2nd number : " << endl;
    cin >> n2;

    try
    {
        if (n2 == 0)
            throw n2;
        else
        {
            result = n1 * n2;
            cout << "\nThe result is : " << result;
        }
    }
    catch (int x)
    {
        cout << "\nCan't multiply with : " << x;
    }
    return 0;
}

//rethrowing and nested try
int rethrow()
{
    int a = 1;

    try
    {
        try
        {
            throw a;
        }
        catch (int x)
        {
            cout << "\nException in inner block.";

            throw x;
        }
    }
    catch (int n)
    {
        cout << "\nException in outer block.";
    }

    cout << "\nEnd ";
    return 0;
}

//catch all 
int catch_all()
{
    int a = 1;

    try
    {

        if (a == 1)
            throw a;

        else if (a == 2)
            throw 'A';

        else if (a == 3)
            throw 4.5;
    }
    catch (...)
    {
        cout << "\nException";
    }

    cout << "\nEnd";
    return 0;
}
int main()
{
    cout << general() << endl;
    cout << rethrow() << endl;
    cout<<catch_all()<<endl;
    return 0;
}