#include <iostream>
using namespace std;
template <class T> T Multiplicar(T a, T b){
    return a*b;
}
class ParOrd{
    public:
        float x,y;
        ParOrd(float x, float y){
            this->x=x;
            this->y=y;
        }

};
ParOrd operator * (ParOrd p, ParOrd o){
    return ParOrd(o.x*p.x,o.y*p.y);
}
ostream& operator<<(ostream& o , ParOrd p){
    o<<p.x<<"   "<<p.y<<endl;
    return o;
}
int main(){
    ParOrd p1(2.3,5.3);
    ParOrd p2(4.6,1.3);
    ParOrd resultado1=p1*p2;
    ParOrd resultado2=Multiplicar(p1,p2);
    float x=9.7,y=8.6;
    float resultado3=Multiplicar(x,y);
    cout<<endl;
    cout<<"El producto es: "<<Multiplicar(x,y)<<endl;
    cout<<"El resultado solo usando la sobrecara es: "<<resultado1<<endl;
    cout<<"El resultado usando la funcion Template con objetos es: "<<resultado2<<endl;
    cout<<"El resultado usando la funcion Template con variables primitivas es: "<<resultado3<<endl;
    return 0;
}
//multiplicacion "."