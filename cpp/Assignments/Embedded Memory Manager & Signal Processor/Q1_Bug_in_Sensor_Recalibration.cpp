#include<iostream>
using namespace std;
void  resetSensorPair1(int x,int y){
    x = x + y;
    y = x-y;
    x = x-y;
}
void  resetSensorPair2(int& x,int& y){
    x = x + y;
    y = x-y;
    x = x-y;
}
void  resetSensorPair3(int* x,int* y){
    *x = *x + *y;
    *y = *x-*y;
    *x = *x-*y;
}
int main(){
    int a = 55; 
    int b = 12;
    cout<<"before : A ="<<a<<"   B  ="<<b<<endl; //55 12
  resetSensorPair1(a,b);    
  cout<<"After : A ="<<a<<"   B  ="<<b<<endl; //55 12
cout<<"before : A ="<<a<<"   B  ="<<b<<endl;  //55 12
  resetSensorPair2(a,b);    
  cout<<"After: A ="<<a<<"   B  ="<<b<<endl;  //12 55
cout<<"before : A ="<<a<<"   B  ="<<b<<endl;  //12 55
  resetSensorPair3(&a,&b);    
  cout<<"After : A ="<<a<<"   B  ="<<b<<endl;  //55 12

}
