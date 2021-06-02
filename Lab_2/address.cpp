#include<iostream>
#include<stdio.h>
using namespace std;

void swap_value(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap_address(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swap_reference(int &a,int &b)
{
    
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<a<<"\t"<<b<<endl;
    swap_value(a,b);
    swap_address(&a,&b);
    cout<<a<<"\t"<<b<<endl;
    swap_reference(a,b);
    cout<<a<<"\t"<<b<<endl;
    return 0;
}