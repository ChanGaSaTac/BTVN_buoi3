#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float r; cout<<"nhap ban kinh r: "; cin>>r;
    float P=2*3.14*r;
    float S=3.14*r*r;
    cout<<fixed<<setprecision(2)<<"chu vi="<<P<<", dien tich="<<S;
    return 0;
}
