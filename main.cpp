#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double funzione (double y) {
    double f;
    y=(y/180)*M_PI;
    f=pow(y, 2)*cos(y)+1;
    return f;
}


int main() {
    double x;
    double a=0, b=0, err=0;
while(funzione(a) * funzione(b)>=0){
    cout<<"inserire estremi"<<endl;
    cin>>a>>b;
    if(funzione(a) * funzione(b)<0){
    break;
    }
}



while(funzione(x)!=0){
x=(a+b)/2;

    if (funzione(a) * funzione(b) < 0) {
        b = x;
    } else {
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
}
