#include<iostream>
using namespace std;
class P;

class Q{
	int s,t;
	public:
		void set(int p,int q){
			s=p;
			t=q;
		}
		void add(P);
};

class P{
	int x,y;
	public:
		void set(int p,int q){
			x=p;
			y=q;
		}
	friend void Q :: add(P);
};

void Q :: add(P a){
	a.set(5,10);
	cout<<"Result: "<<a.x+a.y+s+t<<"\n";
}

int main(){
	P a;
	Q b;
	a.set(5,10);
	b.set(5,10);
	b.add(a);
}