#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

struct Volume 
{
    Distance x;
    Distance y;
    Distance z;
};

int main()
{
    Volume volume1;
    char dumb;
    cout << "Enter length: ";
    cin >> volume1.x.feet >> dumb >> volume1.x.inches;

    cout << "Enter width: ";
    cin >> volume1.y.feet >> dumb >> volume1.y.inches;

    cout << "Enter height: ";
    cin >> volume1.z.feet >> dumb >> volume1.z.inches;

    volume1.x.inches += volume1.x.feet * 12;
    volume1.y.inches += volume1.y.feet * 12;
    volume1.z.inches += volume1.z.feet * 12;

    cout << "The volume of this figure is: " << 
        static_cast<unsigned int>(volume1.x.inches * volume1.y.inches * volume1.z.inches / 1728) << dumb <<
        (volume1.x.inches * volume1.y.inches * volume1.z.inches / 1728 - static_cast<unsigned int>(volume1.x.inches * 
        volume1.y.inches * volume1.z.inches / 1728) )* 100 << "\"" << endl;
}
