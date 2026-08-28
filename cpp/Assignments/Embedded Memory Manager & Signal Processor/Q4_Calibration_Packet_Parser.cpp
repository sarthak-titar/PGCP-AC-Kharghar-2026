#include<iostream>
#include<climits>
using namespace std;
bool parsePacket(int* rawData,
 int size, int** outMin,
  int** outMax){
    int mmax =0;
    int mmin = 0; 
 
    if(size<=0){
        return false;
    }
    for(int i = 1 ; i < size ;i++){
        if(rawData[i]<rawData[mmin]){
            mmin=i;
        }
        if(rawData[i]>rawData[mmax]){
            mmax=i;
        }
    }
   
   
     *outMin = &rawData[mmin];
    *outMax = &rawData[mmax];
   return true;
    

  }
int main(){
    int* min = nullptr;
    int* max = nullptr;
    cout<<"Enter size of no packets"<<endl;
    int n ;
     cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    if (parsePacket(arr, n, &min, &max)) { 
        cout << "Calibration Min : " << *min << endl; 
        cout << "Calibration Max : " << *max<< endl; }

}
