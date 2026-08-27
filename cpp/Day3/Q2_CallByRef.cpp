//swapping two num using call by ref...
#include <iostream>
using namespace std;
void show(int& x , int& y ){
    x = x + y;
    y = x - y;
    x = x - y; 
    cout<<x;
    cout<<y;
}
int main(){
    int a = 3;
    int b = 4;
    show(a,b);
     cout<<a;
    cout<<b;

}
