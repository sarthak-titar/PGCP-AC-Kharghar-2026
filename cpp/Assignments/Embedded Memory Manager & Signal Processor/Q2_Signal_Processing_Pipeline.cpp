#include<iostream>
#include <cmath> 
#include <climits>
using namespace std;
double computeRMS(double* signal , int nn) {
    static double sum = 0.0;
    
    
    for(int i = 0; i < nn ;i++){
       
        sum += pow(*(signal + i), 2);
    }
    return sqrt(sum/nn);
    

}
void normalise(double* signal,int n){
    
    double max =INT_MIN;
    for(int i = 0 ; i <n;i++){
       double currentAbs = abs(*(signal + i));
        if (currentAbs > max) {
            max = currentAbs;
        }
    }
    for(int i = 0 ; i <n;i++){
        *(signal + i)=*(signal + i)/max;
        
    }
    for(int i = 0 ; i < n ;i++){
            cout<<*(signal + i);
    }
    cout<<endl;
    
    

}
 int countZeroCrossings(double* signal ,int n){
    int count = 0 ; 
    for(int i = 0 ; i < n ; i ++){
        if(*(signal + i)>0 && *(signal + (i+1))<0 && *(signal + (i+1))<0 ) {
            count= count +i;
        }
    }
    return count;

 }
void applyGain(double* signal ,int n , double nn){
    for(int i = 0 ; i < n ;i++){
        *(signal+i)= (*(signal+i) )* nn;
    }
    for(int i =0 ; i<n;i++){
        cout<<*(signal+i)<<endl;
    }

}


int main(){
    int n = 7;
    double arr[n];
    for(int i = 0 ; i<n ;i++){
            cin>>arr[i];
    }
    for(int i = 0  ; i<n ;i++){
        cout<<arr[i]<<endl;
    }

   
     double ans = computeRMS(arr , n);
     cout<<ans<<endl;
     normalise(arr ,n);
    
    int ans2= countZeroCrossings(arr,n);
    cout<<ans2<<endl;
    double g = 2.5;
    applyGain(arr,n,g);


}
