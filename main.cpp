#include <iostream>
#include <cmath>
using namespace std;
double funzione(double x , double &fx)
{
    fx = x * x * cos(x) + 1;
    return fx;
}

int main() {
double a=0,b=0,fx=0,x=0,err=2;
while(funzione(a,fx)*funzione(b,fx)>=0) {
    cout <<"inserire estremi"<<endl;
    cin >> a >> b;

    if (funzione(a,fx)*funzione(b,fx) < 0){
        break;
    }
}

while (funzione(x,fx)!=0) {
    x=(a+b)/2;
        if (funzione(x, fx) * funzione(b, fx) < 0) {
            a = x;
        }
        else{
        b = x;
        }
    err = abs((a - b)) / 2;
        if (err < 1e-6){
            break;
        }
}
x=x*10000;
x=(int)x;
x=x/10000;
cout<< x;
return 0;
}
