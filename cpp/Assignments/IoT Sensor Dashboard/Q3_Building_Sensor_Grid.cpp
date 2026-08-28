#include<iostream>
#include<climits> 
using namespace std;
class Building_Sensor{
    public:
    void Sensor_Grid(){
        int n= 3;
    double arr[n][n] ;
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j < n; j ++){
            cin>>arr[i][j];
        }
    }
    double hotest=INT_MIN;
     for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j < n; j ++){
            cout<<arr[i][j];
            cout<<"     ";
            if(arr[i][j]>hotest){
                hotest = arr[i][j];
            }
        }
        cout<<endl;
    }
  cout<<hotest;

     for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j < n; j ++){
            if(arr[i][j] == hotest){
                cout<<"Floor :"<<i+1<<"Room : "<<j+1 <<" - > "<< hotest<<endl;
            }

        }
    }
//     
       double sum1 =   0;
       double sum2 =   0;
       double sum3 =   0;

       for(int i = 0 ;i<1;i++){
        for(int j = 0 ; j < n; j ++){
              sum1 = sum1+arr[i][j];
            }
        }

         for(int i = 1 ;i<2;i++){
        for(int j = 0 ; j < n; j ++){
              sum2 = sum2+arr[i][j];
            }
        }

         for(int i = 2 ;i<3;i++){
        for(int j = 0 ; j < n; j ++){
              sum3 = sum3+arr[i][j];
            }
        }

        double avg1 = sum1 / n;
        double avg2 = sum2 / n;
        double avg3 = sum3 / n;

        if(avg1 >= avg2 && avg1 >= avg3 ){
            cout<<"Hottest Floor : Floor 1 : "<<avg1<<endl;
        }
        else if(avg2 >= avg3 && avg2 >=avg1){
            cout<<"Hottest Floor : Floor 2 : "<<avg2<<endl;
        }
         else {
            cout<<"Hottest Floor : Floor 3 : "<<avg3<<endl;
        }
// 
        static int counnnt= 0;
             for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j < n; j ++){
            if(arr[i][j]>=30){
                    counnnt++;
            }

        }
    }
    cout<<"Rooms at WARNING or above: "<<counnnt<<endl;
        
    }
};
int main (){
    Building_Sensor bb;
    bb.Sensor_Grid();
//     

return 0;
    
}
