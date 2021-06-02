#include<iostream>
using namespace std;
struct emp
{
    int empno,sal;
    char name[10],dept[10];
}e[5];
int main()
{
    int i,sum=0,avg,hisal;
    for(i=1;i<6;i++)
    {
        cout<<"The details of employee"<<i<<":"<<endl;
        cout<<"Employee No. :";
        cin>>e[i].empno;
        cout<<"Name:";
        cin>>e[i].name;
        cout<<"Salary:";
        cin>>e[i].sal;
        cout<<endl;
    
    }
    cout<<endl;
    for(i=1;i<6;i++)
    {
        cout<<"Details:"<<i<<" : "<<endl;
        cout<<"Employee no. :"<<e[i].empno<<endl<<"Name: "<<e[i].name<<endl<<"Deperment :"<<e[i].dept<<endl<<"Salary: "<<e[i].sal;
        
    }
    for(i=0;i<6;i++)
    {
        sum=sum+e[i].sal;
    }
    cout<<"\n Average salary of the employee: "<<(sum/5);
    hisal = e[i].sal;
    for(i=1;i<<6;i++)
    {
        if(e[i].sal>hisal)
        hisal = e[i].sal;
    }
    cout<<"\n Highest Salary : "<<hisal;
    return 0;
}