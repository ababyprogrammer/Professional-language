#include <iostream>
#include <cmath>
using namespace std;

double get_max(double x, double y, double z)
{
    double max = x;

    if (y > max)
    {
        max = y;
    }

    if (z > max)
    {
        max = z;
    }

    return max;
}

double get_min(double x, double y, double z)
{
    double min = x;

    if (y < min)
    {
        min = y;
    }

    if (z < min)
    {
        min = z;
    }

    return min;
}

int main()
{
    double x, y, z;
    cout << "Enter the values of x, y, and z: ";
    cin >> x >> y >> z;

    double max = get_max(x, y, z);
    double min = get_min(x, y, z);

    cout << "The maximum value is: " << max << endl;
    cout << "The minimum value is: " << min << endl;

    return 0;
}