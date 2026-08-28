#include<iostream>
using namespace std;
int dataReg    = 11001010; 
void statusReg(const int* statusReg1 ){
    // statusReg(const int* statusReg1 )......constant varibale and integer pointer
    cout<<"value of:"<<*statusReg1<<endl;
    cout<<"the firmware must only read this not writes any :"<<endl;
//we can not update because statusReg1 value is constant
    // int try = statusReg1  + 11;
    // cout<<try;
// we can do like : repointing.
    statusReg1 = &dataReg;
    cout<< *statusReg1<<endl;
    



}
void contronReg(int* const  controlRegv1 ){
    // statusReg( int* const statusReg1 )......constant pointer
    cout<<"controlRegv :"<<*controlRegv1<<endl;
    cout<<"after changing value  ::"<<*controlRegv1+112232;
    // we create const pointer not variable....
    // we can change value of varibale but we can not change pointer address
    // controlRev1 = &dataReg;
    // cout<<*controlRev ;
}
void statusReg1(const int* const statusRegv2 ){
    // we can not assign varibale as well as can not change pointer
    // cout<<*statusRegv2<<endl;
    // statusRegv2 = &dataReg;
}

int main(){
    int statusRegv = 10110001;  
    int controlRegv = 00000000;  
    int dataRegv    = 11001010; 
    statusReg(&statusRegv);
    contronReg(&controlRegv);
    statusReg1(&statusRegv );

    

}
