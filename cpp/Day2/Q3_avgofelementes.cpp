// Find the average of array elements.
#include <iostream>
using namespace std;
    void avg(int arr1[]){
         int avg ;
         static int sum = 0;
         int i;
        for ( i = 0 ; i < 5; i++){
            sum += arr1[i];
    }
        avg = sum / i;
        cout<<"Average of elements:"<<avg;
    }
int main(){
    cout<<"Enter array Elements"<<endl;
    int arr[5] ;
    for (int i = 0 ; i < 5; i++){
        cin>>arr[i];
    }
    avg(arr);
}
