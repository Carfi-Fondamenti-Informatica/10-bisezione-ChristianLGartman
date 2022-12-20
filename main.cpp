#include <iostream>
#include<cmath>
using namespace std;

double f (double y) {
    double f;
    y=(y/180)*M_PI;
    f=pow(y, 2)*cos(y)+1;
    return f;
}


int main() {
    double a=0,b=0,x=0,err;
    while(f(a)*f(b)>=0) {
        cout <<"inserire estremi"<<endl;
        cin >> a >> b;

        if (f(a)*f(b) < 0){
            break;
        }
    }

    while(f(x)!=0){
        x=(a+b)/2;

        if (f(a) * f(b) < 0) {
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
