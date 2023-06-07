#include <iostream>
using namespace std;

template <typename T>


T sum(T a, T b)
{
    return a+b;
}

int main() {
    int irpta = sum<int> (5.98,3);
    cout << irpta;

    return 0;
}



