#include <iostream>
using namespace std;
class base 
{ 
	public:
 	int sh_x; 	
	 void getdata()
	 { 	
	 cout << "Enter value of x= ";
	 cin >> sh_x; 	
	 } 
	 }; 
	 class derive1 : public base
	 { 	
	 public: 	
	 int sh_y; 	
	 void readdata() 
	 { 
	  cout << "\nEnter value of y= ";
	  cin >> sh_y;
	  } 
	  }; 
	  class derive2 : public derive1
	  { 
	  private: 	
	  int sh_z; 
	  	public: 
		  void indata()
		  { 
		  cout << "\nEnter value of z= "; 
		  cin >> sh_z; 
		  } 
		  void product()
		  { 
		  cout << "\nProduct= " << sh_x * sh_y * sh_z;
		  } 
		  };
		   int main()
		    { 
			derive2 a;
		a.getdata(); 
		a.readdata(); 
		a.indata(); 
		a.product(); 
		return 0;
		 }