#include <iostream>
using namespace std;
    void sum(int arr1[]){
        static int sum = 0;
         for (int i = 0 ; i < 5; i++){
        sum = sum + arr1[i];
    }
    cout<<"sum of Elements::"<<sum;

    }
int main(){
    
    cout<<"Enter array Elements"<<endl;
    int arr[5] ;
    for (int i = 0 ; i < 5; i++){
        cin>>arr[i];
    }
    sum(arr);

}
