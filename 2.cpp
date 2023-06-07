#include <iostream>

using namespace std;


int main()
{
    int a,b,c;
    cin >> a >> b >> c; 
    if (a > b and a > c)
        cout << a << " es mayor";

    if (b > a and  b > c)
        cout << b << " es mayor";

    if (c > a and  c > b)
        cout << c << " es mayor";
}