#include <iostream>
using namespace std;
     void show(int arr1[]){
        static int max = 0;
        for (int i = 0 ; i < 5; i++){
        if(arr1[i]>max){
            max = arr1[i];
        }
    }
    cout<<"Max number is::"<<endl<<max;

    }
int main(){
    cout<<"Enter array Elements"<<endl;
    int arr[5] ;
    for (int i = 0 ; i < 5; i++){
        cin>>arr[i];
    }
    show(arr);

}
