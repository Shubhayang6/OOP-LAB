# include <iostream> 
using namespace std;
struct student
{
char name[15];
char branch[5];
char section[5];
int roll;
} s;
int main()
{
   
cout<<"enter name:";
cin>>s.name;
cout<<"enter branch:";
cin>>s.branch;
cout<<"enter section:";
cin>>s.section;
cout<<"enter roll:";
cin>>s.roll;
    cout<<"name:"<<s.name<<endl;
    cout<<"branch:"<<s.branch<<endl;
    cout<<"section:"<<s.section<<endl;
    cout<<"rollno:"<<s.roll<<endl;
    return 0;
}