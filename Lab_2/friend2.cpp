#include<iostream>
using namespace std;
class P{
	int x,y,z;
	public:
		void input(){
			cout<<"Enter 3 no. :\n";
			cin>>x>>y>>z;
		}
		friend class Q;
};
class Q{
	int p,q,r;
	public:
		P a;
		void out(){
			a.input();
			cout<<"Entered :"<<a.x<<" "<<a.y<<" "<<a.z<<"\n";
		}
		void display(){
			cout<<"Sum: "<<(a.x+a.y+a.z)<<"\n";
		}
};
int main(){
	Q b;
	b.out();
	b.display();
	return 0;
}