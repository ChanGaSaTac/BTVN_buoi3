#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c; cout<<"nhap gia tri 3 so nguyen: "; cin>>a>>b>>c;
    float trungbinh=(a+b+c)/3;
    cout<<fixed<<setprecision(2)<<"gia tri trung binh="<<trungbinh;
    return 0;
}
