#include <iostream>

using namespace std;

template <typename T>
T minimo(T _a, T _b)
{
    return _a < _b ? _a : _b;                         //Retorna el mayor entre a y b
}

int main()  {
    int a,b,i; 
    cin >> a >> b;
    i=minimo <float> (a,b);

    cout << "El minimo es "<< i << endl;

    float fa, fb, fi;
    cin >> fa >> fb;
    fi = minimo <float> (fa, fb) ;                    //Documentar 
    cout << "El minimo es " << fi << endl;            //
    return 0;
}