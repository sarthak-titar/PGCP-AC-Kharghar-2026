//pointers
#include <iostream>
using namespace std;
int main(){
    int a = 5 ;
    int *ptr = &a;

    cout<<"a"<<a<<endl;          //5
    cout<<"&a"<<&a<<endl;         //addresss

    cout<<"ptr"<<ptr<<endl;       //addresss
    cout<<"*ptr"<<*ptr<<endl;      //5
    return 0 ;
}
