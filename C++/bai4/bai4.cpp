#include <iostream>
using namespace std;

int main(){
    int n; cout<<"nhap so nguyen n co 3 chu so: "; cin>>n;
    int Tong=n%10;
    Tong+=(n/10)%10;
    Tong+=(n/100)%10;
    cout<<"Tong cac chu so="<<Tong;
    return 0;
}
