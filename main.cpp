#include <iostream>
#include<cmath>
using namespace std;

double f (double y, double fx) {
    y=(y/180)*M_PI;
    fx=y*y*cos(y)+1;
    return fx;
}


int main() {
    double a=0,b=0,x=0,err, fx=0;
   while(f(a,fx)*f(b,fx)>=0) {
    cout <<"inserire estremi"<<endl;
    cin >> a >> b;

    if (f(a,fx)*f(b,fx) < 0){
        break;
    }
}

    while(f(x,fx)!=0){
        x=(a+b)/2;

        if (f(a,fx) * f(b,fx) < 0) {
            b = x;
        }
        else {
            a = x;
        }
        err = abs((b - a) / 2);

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
