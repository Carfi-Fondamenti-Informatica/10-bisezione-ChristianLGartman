#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double funzione (double y) {
    float f;
    y=(y/180)*M_PI;
    f=pow(y, 2)*cos(y)+1;
    return f;
}


int main() {
    int i, e=1;
    double x;
    double a, b, err;
do{
    cout<<"inserire estremi"<<endl;
    cin>>a>>b;
    if (funzione(a) * funzione(b)>=0){
    i=1;
    }
    else {
        i=0;
    }
}while (i==0);
do{
x=(a+b)/2;
if (funzione(x)==0){
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<< x;
    cout << fixed << setprecision(4) << funzione(x);
}
else {
    if (funzione(a) * funzione(b) < 0) {
        b = x;
    } else {
        a = x;-12.000
    }
    err = abs((b - a) / 2);
    if (err >= 1e-6) {
        e = 1;
    } else {
        e = 0;
    }
}
}while(e==0);
    x=x*10000;
    x=(int)x;
    x=x/10000;
    cout<< x;
}
