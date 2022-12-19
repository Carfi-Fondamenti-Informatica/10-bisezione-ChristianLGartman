#include <iostream>
#include<cmath>
using namespace std;

float funzione (float y) {
    float f;
    y=y/180*M_PI;
    f=y*y*cos(y)+1;
    return f;
}

int main() {
    int i, e=1;
    float x;
    float a, b, err;
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
    cout<<int(x*10000)/10000.0<<endl;
    cout<<int( funzione(x) *10000)/10000.0<<endl;
}
else {
    if (funzione(a) * funzione(b) < 0) {
        b = x;
    } else {
        a = x;
    }
    err = abs((b - a) / 2);
    if (err >= 1e-6) {
        e = 1;
    } else {
        e = 0;
    }
}
}while(e==0);
    cout<<int(x*10000)/10000.0<<endl;
    cout<<int( funzione(x) *10000)/10000.0<<endl;
}
