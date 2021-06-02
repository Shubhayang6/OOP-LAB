#include <iostream>
using namespace std;
class matrixB;
class matrixA
{
    int **m;

public:
    void getdata();
    void display();
    friend void addition(matrixA, matrixB);
};
void matrixA::getdata()
{
    int i, j;
    cout << "Enter the data for matrix A : " << endl;
    m = new int *[3];
    for (i = 0; i < 3; i++)
        m[i] = new int[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m[i][j];
        }
    }
}
void matrixA ::display()
{
    int i, j;
    cout << "Matrix A : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << "\n";
    }
}
class matrixB
{
    int **n;

public:
    void getdata();
    void display();
    friend void addition(matrixA, matrixB);
};
void matrixB::getdata()
{
    int i, j;
    cout << "Enter the data for matrix B : " << endl;
    n = new int *[3];
    for (i = 0; i < 3; i++)
        n[i] = new int[3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> n[i][j];
        }
    }
}
void matrixB::display()
{
    int i, j;
    cout << "Matrix B : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << n[i][j] << "\t";
        }
        cout << "\n";
    }
}
void addition(matrixA a, matrixB b)
{
    int i, j;
    cout << "The sum of two matrix : " << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a.m[i][j] + b.n[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    matrixA a;
    matrixB b;
    a.getdata();
    b.getdata();
    a.display();
    b.display();
    addition(a, b);
}