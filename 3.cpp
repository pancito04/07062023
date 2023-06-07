#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    (a > b and a > c)? cout << "A es el mayor" << endl: cout << "A no es el mayor"<< endl;
    (b>a and b>c)? cout << "B es el mayor"<< endl:cout << "B no es el mayor"<< endl ;
    (c>a and c>b)? cout << "C es el mayor"<< endl: cout << "C no es el mayor"<< endl; 
}