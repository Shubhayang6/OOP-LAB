#include <iostream>

using namespace std;
class Base1
{
   int Sh_x,Sh_y,Sh_z;
public:
    Base1(int x,int y,int z)
    {
    Sh_x=x;
    Sh_y=y;
    Sh_z=z;
    cout<<"\n BASE 1:";
    }
    Base_1()
    {
        cout<<"\n BASE_1";
    }
};

class Base2: public Base1
{
    int Sh_a,Sh_b,Sh_c;
public:
    Base2(int a,int b,int c,int x,int y,int z): Base1(x,y,z)
    {
        Sh_a=a;
        Sh_b=b;
        Sh_c=c;
        cout<<"\n BASE 2 ";
    }
    Base_2()
    {
        cout<<"\n BASE_2 ";
    }

};

class Derived:public Base2
{
    int Sh_i,Sh_j,Sh_k;
public:
    Derived(int i,int j,int k,int a,int b,int c,int x,int y,int z):Base2(a,b,c,x,y,z)
    {
        Sh_i=i;
        Sh_j=j;
        Sh_k=k;
        cout<<"\n DERIVED ";
    }
    Derived_1()
    {
        cout<<"\n DERVIED_1";

    }

};

int main()
{
Derived obj(1,2,3,4,5,6,7,8,9);
return 0;
}