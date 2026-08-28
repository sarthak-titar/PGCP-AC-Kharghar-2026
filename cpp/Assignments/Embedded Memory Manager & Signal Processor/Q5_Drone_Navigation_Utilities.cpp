#include<iostream>
#include<cmath>
using namespace std;
inline double distanceBetween(double x1, double y1, double x2, double y2){
    return sqrt(pow(x2 -x1,2)+pow(y2-y1,2)); 
}
inline double toRadians(double degrees){
    return degrees*(3.14/180.0);
}
inline double clamp(double value, double minVal, double maxVal){
    {
    if (value < minVal)
        return minVal;

    if (value > maxVal)
        return maxVal;

    return value;
}
    
}
inline bool isInSafeZone(double x, double y, double cx, double cy, double radiuss){
    return  distanceBetween(x,y,cx,cy)<= radiuss;
}
int main(){
    double homecox = 0.0;
    double homecoy = 0.0;
    double dronex;
    double droney;
    double safer = 50.0;
    
    cout<<" drons coordinates:"<<endl;
    double arr[3][2]={{30.0, 40.0},
        {60.0, 0.0},
        {-20.0, 10.0}
    };
    double radius;
    for(int i = 0 ;i < 3;i++){
        int d =  arr[i][0];
        int dd = arr[i][1];
         radius = distanceBetween(homecox,homecoy,d,dd);
        cout<<"Distence from home :(radius)"<<radius<<"units"<<endl;
        bool aa = isInSafeZone(d,dd,homecox,homecoy,safer);
        cout<<(aa?"safe":"unsafe")<<endl; 
    }
 
    double angle = 90.0;
    cout << "90 degrees in radians: "
         << toRadians(angle) << "\n";

    
    double value = 75.0;
    cout << "Clamped value of 75 to [0, 50]: "
         << clamp(value, 0.0, 50.0) << "\n";

    return 0;
   
    //  if( radius <= 50.0){
    //     cout<<"sattus  ::  Safe Zone"<<endl;
    //  }
    //  else{
    //     cout<<"status :: out of Zone"<<endl;
    //  }
}


 // int arr[3][2];
    // for(int i = 0 ; i < 3; i++){
    //     for(int j =  0 ; j < 2;j++ ){
    //         if(i == 0 && j == 0 ){
    //                 cin>>arr[i][j];
    //                 dronex1 = arr[i][j];
    //         }
    //         else{
    //             cin>>arr[i][j];
    //             droney1 = arr[i][j];
    //         }

    //         // 
    //         if(i == 1 && j == 0 ){
    //                 cin>>arr[i][j];
    //                 dronex2 = arr[i][j];
    //         }
    //         else{
    //             cin>>arr[i][j];
    //             droney2 = arr[i][j];
    //         }

    //         // 
    //         if(i == 2 && j == 0 ){
    //                 cin>>arr[i][j];
    //                 dronex3 = arr[i][j];
    //         }
    //         else{
    //             cin>>arr[i][j];
    //             droney3 = arr[i][j];
    //         }
            
    //     }
    // }
