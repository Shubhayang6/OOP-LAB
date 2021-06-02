
#include<iostream> 
using namespace std; 
class employee 
{ 
protected: 
int Sh_id; 
char Sh_name[20]; 
public: 
void get() 
{ 
cout<<"Enter Employee ID : "; 
cin>>Sh_id; 
cout<<"Enter name : "; 
cin>>Sh_name; 
} 
}; 
class salary:public employee 
{ 
float Sh_basic, Sh_d, Sh_hr, Sh_epf,Sh_g; 
public: 
void gross() 
{ 
Sh_hr=Sh_basic*0.2; 
Sh_d=Sh_basic*0.5; 
Sh_epf=100; 
Sh_g=((Sh_basic+Sh_d+Sh_hr)-Sh_epf); 
} 
void input() 
{ 
get(); 
cout<<"Enter Basic Salary : ";
cin>>Sh_basic; 
} 
void display() 
{ 
cout<<"****************"<<endl;
cout<<"Employee name : "<<Sh_name<<endl<< "Employee ID : "<<Sh_id<<endl<<"Gross Salary : "<<Sh_g; 
} 
}; 
int main() 
{ 
salary Sh_s; 
Sh_s.input(); 
Sh_s.gross(); 
Sh_s.display(); 
}