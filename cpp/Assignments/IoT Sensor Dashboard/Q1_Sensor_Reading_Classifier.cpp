#include <iostream>
#include <string>
using namespace std;
class  sensor_reading{
public:
   void Reading_classifire(){
     double Temp ;
    cout<<"Enter the Temperature::"<<endl;
    
    cin>>Temp ;
    double TempInFah = (Temp*9/5)+32;
    cout<<"Temperature:"<<Temp<<"°C"<<"/"<<TempInFah<<"℉"<<endl;
    int Temp1 = (int)Temp;

   
    int Status_Code ;
    cout<<"Status          :";
    if(Temp1 < 0){
        Status_Code = -1;
        cout<<"SENSOR_ERROR"<<endl;
    }
    else if(Temp1 >= 0 && Temp1 <= 29){
         Status_Code = 0;
         cout<<"NORMAL"<<endl;
    }
    else if(Temp1 >= 30 && Temp1 <= 44){
         Status_Code = 1;
         cout<<"WARNING"<<endl;
    }
    else if(Temp1 >= 45 && Temp1 <= 59){
         Status_Code = 2;
         cout<<"CRITICAL"<<endl;
    }
    else{
         Status_Code = 3;
         cout<<"SHUTDOWN"<<endl;

    }
    // cout<<Status_Code<<endl;
//
    switch(Status_Code){
        case -1:{
            cout<<"Status          :"<<"Sensor fault — check wiring"<<endl;
            break;
        }
        case 0:{
            cout<<"Status          :"<<"No action required"<<endl;
            break;
        }
        case 1:{
            cout<<"Status          :"<<"Cooling system triggered"<<endl;
            break;
        }
         case 2:{
            cout<<"Status          :"<<"Cooling system triggered"<<endl;
            break;
        }
         case 3:{
            cout<<"Status          :"<<"Emergency shutdown initiated"<<endl;
            break;
        }
        default:{
            cout<<"Status          :"<<"Somthing Wrong"<<endl;
        }
    }
    cout<<"Reading          :";
   string s= (Temp1 <= 25)? "Beloew Average":"Above Average";
  cout<<s;
    }
};
int main(){
   
    sensor_reading s;
    s.Reading_classifire();
 return 0;
}
