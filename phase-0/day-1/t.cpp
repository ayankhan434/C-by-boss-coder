#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = a, y = b, z = c;
    // assume x is minimum
    if (y < x)
    {
        // swap the value of x and y
        swap(x, y);
    }
    if (z < x)
    {
        // swap the value of z and x
        swap(z, x);
    }
    if (y > z)
    {
        // swap the value of y and z
        swap(y, z);
    }
    cout << x << "\n"
         << y << "\n"
         << z << endl
         << endl;

    cout << a << endl
         << b << endl
         << c << endl;

    return 0;
}