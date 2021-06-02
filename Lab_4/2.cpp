#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

class area
{
        float Ru_ar;
        public:
                area(float Ru_r)
                {
                        Ru_ar=3.14*Ru_r*Ru_r;
                }
                area(float Ru_l, float Ru_b)
                {
                        Ru_ar=Ru_l*Ru_b;
                }
                area(float Ru_a, float Ru_b, float Ru_c)
                {
                        float Ru_s;
                        Ru_s=(Ru_a+Ru_b+Ru_c)/2;
                        Ru_ar=Ru_s*(Ru_s-Ru_a)*(Ru_s-Ru_b)*(Ru_s-Ru_c);
                        Ru_ar=pow(Ru_ar,0.5);
                }
                void display()
                {
                        cout<<"\n Area : "<<Ru_ar;
                }
};
int main()
{
        int Ru_ch;
        float Ru_x, Ru_y, Ru_z;
        do
        {
                cout<<"\n\n 1. Area of Circle";
                cout<<"\n 2. Area of Rectangle";
                cout<<"\n 3. Area of Triangle";
                cout<<"\n 4. Exit";
                cout<<"\n\n Enter Your Choice : ";
                cin>>Ru_ch;

                switch(Ru_ch)
                {
                        case 1 :
                        {
                                cout<<"\n Enter Radius of the Circle : ";
                                cin>>Ru_x;
                                area Ru_a1(Ru_x);  
                                Ru_a1.display();
                        }
                        break;

                        case 2 :
                        {
                                cout<<"\n Enter Length and Breadth of the Rectangle : ";
                                cin>>Ru_x>>Ru_y;
                                area Ru_a2(Ru_x,Ru_y);
                                Ru_a2.display();
                        }
                        break;

                        case 3 :
                        {
                                cout<<"\n Enter Sides of the Triangle : ";
                                cin>>Ru_x>>Ru_y>>Ru_z;
                                area Ru_a3(Ru_x,Ru_y,Ru_z);
                                Ru_a3.display();
                        }
                        break;

                        case 4 :
                                exit(0);

                        default :
                                cout<<"\n\n Invalid Choice ...";
                }
        } while(Ru_ch!=4);
        return 0;
}