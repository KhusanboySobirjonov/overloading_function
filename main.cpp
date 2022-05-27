/*#include <iostream>
using namespace std;
class Distance {
    public:
        int feet, inch;
        Distance (int f, int i) {
            this -> feet = f;
            this -> inch = i;
        }
        void operator -() {
            feet--;
            inch--;
            cout << "\nFeet & Inches(Decrement): "
            << feet << ", " << inch;
        }
};
int main()
{
    int f, i;
    cout << "f="; cin >> f;
    cout << "i="; cin >> i;
    Distance d1(f,i);
    -d1;
    return 0;
}
*/
#include <iostream>
using namespace std;
class Distance {
    public:
        int feet, inch;
        Distance () {
            this -> feet = 0;
            this -> inch = 0;
        }
        Distance (int f, int i) {
            this -> feet = f;
            this -> inch = i;
        }
        Distance operator+(Distance& d2) {
            Distance d3;
            d3.feet = this -> feet + d2.feet;
            d3.inch = this -> inch + d2.inch;
            return d3;
        }
};
int main()
{
    int f, i;
    Distance d1(5,6);
    Distance d2(8,9);
    Distance d3;
    d3 = d2 + d1;
    cout << "\n Total feet & inches: " << d3.feet << "'" << d3.inch;
    return 0;
}
