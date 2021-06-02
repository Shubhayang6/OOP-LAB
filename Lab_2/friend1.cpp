#include<iostream>
using namespace std;
class fnc{
	int p;
	public:
		void input(){
			cout<<"Enter :";
			cin>>p;
		}
		friend void display(fnc);
};
void display(fnc a){
	cout<<"Showing: "<<a.p<<"\n";
}
int main(){
	fnc a;
	a.input();
	display(a);
}