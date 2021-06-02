#include <iostream>
using namespace std;
class matrix
{
    int a[10][10], c[10][10], e[10][10], x, y, i, j;

public:
    void read();
    void add();
};
void matrix::read()
{
    cout << "Enter the rows   ";
    cin >> x;
    cout << "Enter the columns   ";
    cin >> y;
    cout << "Enter elements of first matrix\n\n";
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix\n\n";
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            cin >> c[i][j];
        }
    }
}
void matrix::add()
{
    cout << "Sum of Matrices 1 and 2 is\n";
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            e[i][j] = a[i][j] + c[i][j];
            cout << e[i][j] << "";
        }
        cout << endl;
    }
}

