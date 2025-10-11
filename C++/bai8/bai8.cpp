#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float u,r; cout<<"USD:"; cin>>u; cout<<"ty gia:"; cin>>r;
    float vnd=u*r;
    cout<<fixed<<setprecision(2)<<"VND="<<vnd;
    return 0;
}
