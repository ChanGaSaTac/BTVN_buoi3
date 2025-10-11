#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float C; cout<<"nhiet do C: "; cin>>C;
    float F=C*9/5+32;
    cout<<fixed<<setprecision(2)<<"nhiet do F: "<<F;
    return 0;
}
