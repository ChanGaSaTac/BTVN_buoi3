#include <iostream>
using namespace std;

int main(){
    int t; cout<<"tong so giay: "; cin>>t;
    int s,m,h,d;
    s=t%60;
    m=((t-s)/60)%60;
    h=((t-s)/60-m)/60%24;
    d=(((t-s)/60-m)/60-h)/24;
    cout<<d<<" ngay "<<h<<" gio "<<m<<" phut "<<s<<" giay";
    return 0;
}
