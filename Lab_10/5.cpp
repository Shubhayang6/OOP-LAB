#include <iostream>
using namespace std;
class House_188
{
public:
    virtual void no_of_room() = 0;
    virtual void get() = 0;
    virtual void Area() = 0;
    virtual void Volume() = 0;
};
class OneBHK_188 : public House_188
{
public:
    int room;
    void no_of_room()
    {
        cout << "Enter no. of rooms:";
        cin >> room;
    }
    int *breadth, *length, *height;
    OneBHK_188()
    {
        breadth = (int *)malloc(room * sizeof(int));
        length = (int *)malloc(room * sizeof(int));
        height = (int *)malloc(room * sizeof(int));
    }
    void get()
    {
        for (int i = 0; i < room; i++)
        {
            cout << "Enter the breadth of One BHK house room" << i + 1 << ":"<<endl;
                                                                          
                    cin >>breadth[i];
            cout << "Enter the length of One BHK house room" << i + 1 << ":" <<endl;
                                                                         
                    cin >>length[i];
            cout << "Enter the height of One BHK house room" << i + 1 << ":" <<endl;
                                                                         
                    cin >>height[i];
        }
    }
    void Area()
    {
        int sum = 0;
        for (int i = 0; i < room; i++)
            sum += length[i] * breadth[i];
        cout << "The area of the One BHK house is: " << sum << endl;
    }
    void Volume()
    {
        int sum = 0;
        for (int i = 0; i < room; i++)
            sum += length[i] * breadth[i] * height[i];
        cout << "The volume of the One BHK house is: " << sum << endl;
        ;
    }
};
class TwoBHK_188 : public House_188
{
public:
    int room;
    void no_of_room()
    {
        cout << "Enter no. of rooms:";
        cin >> room;
    }
    int *breadth, *length, *height;
    TwoBHK_030()
    {
        breadth = (int *)malloc(room * sizeof(int));
        length = (int *)malloc(room * sizeof(int));
        height = (int *)malloc(room * sizeof(int));
    }
    void get()
    {
        for (int i = 0; i < room; i++)
        {
            cout << "Enter the breadth of Two BHK house room" << i + 1 << ":" 
                                                                          <<endl;
                    cin >>breadth[i];
            cout << "Enter the length of Two BHK house room" << i + 1 << ":" 
                                                                         <<endl;
                    cin >>length[i];
            cout << "Enter the height of Two BHK house room" << i + 1 << ":"
                                                                         <<endl;
                    cin >>height[i];
        }
    }
    void Area()
    {
        int sum = 0;
        for (int i = 0; i < room; i++)
            sum += length[i] * breadth[i];
        cout << "The area of the Two BHK house is: " << sum << endl;
    }
    void Volume()
    {
        int sum = 0;
        for (int i = 0; i < room; i++)
            sum += length[i] * breadth[i] * height[i];
        cout << "The volume of the Two BHK house is: " << sum << endl;
        ;
    }
};
int main()
{
    House_188 *vptr;
    OneBHK_188 o;
    TwoBHK_188 t;
    vptr = &o;
    vptr->no_of_room();
    vptr->get();
    vptr->Area();
    vptr->Volume();
    vptr = &t;
    vptr->no_of_room();
    vptr->get();
    vptr->Area();
    vptr->Volume();
    return 0;
}