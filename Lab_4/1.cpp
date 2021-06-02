#include<iostream>
using namespace std;

class qn1 {
public:
    float sh_r, area;

    qn1() {
        cout << "Enter the radius of the circle:";
        cin >> sh_r;

        area = 3.14 * sh_r * sh_r;
    }

    void show() {
        cout << "Area of the circle is: " << area;
    }
};

int main() {

    qn1 sh_a;

    sh_a.show();

    return 0;
}