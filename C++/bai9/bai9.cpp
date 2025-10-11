#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float P,r,n;
    cout<<"so tien goc: "; cin>>P;
    cout<<"lai suat %/nam: "; cin>>r;
    cout<<"so nam: "; cin>>n;
    float A=P+(P*r*n)/100;
    cout<<fixed<<setprecision(0)<<"so tien cuoi ky: "<<A;
    return 0;
}
