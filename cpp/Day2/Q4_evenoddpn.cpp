// Count even and odd numbers.
// Count positive, negative and zero.
#include <iostream>
using namespace std;
   void evenodd(int arr1[]){
       int even = 0;
      int odd = 0;
      int zero =0;
        for (int i = 0 ; i < 5; i++){
        if( arr1[i] %2 != 0 ){
            odd= odd+ 1;
           
        }
        else if(arr1[i] % 2 == 0 && arr1[i] != 0 ){
            even = even+1;
             
        }
        else{   
          
           zero = zero +1;
        }
    }
    cout<<"even"<<even;
    cout<<"odd"<<odd;
    cout<<"zero"<<zero;
   };
   void pn(int arr2[]){
    int pp =0;
    int nn =0;
    int zero =0;
    for(int i = 0 ; i < 5 ;i++){
    if(arr2[i] > 0){
        pp++;
    }
    else if(arr2[i]<0){
            nn++;

    }
    else{
        zero++;
    }
    }
     cout<<"positive"<<pp;
    cout<<"negative"<<nn;
    cout<<"zero"<<zero;
   };
int main(){
     cout<<"Enter array Elements"<<endl;
    int arr[5] ;
    for (int i = 0 ; i < 5; i++){
        cin>>arr[i];
    }
    evenodd(arr);
    pn(arr);
}
