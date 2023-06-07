#include <iostream>
using namespace std;
template<class T> T max(T &a, T &b){
    return (a>b)? a:b;
}
class Vector{
    public:
        float x,y;
        bool operator>(Vector v){
            return ((x*x+y*y)>(v.x*v.x+v.y*v.y))? true:false;
        }
};
int main(){
    Vector v1={1,3};
    Vector v2={2,5};
    int x=2, y=3;
    cout<<"mayor: "<<max(x,y)<<endl;
    cout<<"mayor: "<<max(v1,v2).x<<", "<<max(v1,v2).y<<endl;
    return 0;
}
