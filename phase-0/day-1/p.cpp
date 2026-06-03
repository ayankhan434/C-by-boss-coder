#include <iostream>
using namespace std;
int main()
{
    // read the input as a string
    string s;
    cin >> s;
    if (s[0] % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
}