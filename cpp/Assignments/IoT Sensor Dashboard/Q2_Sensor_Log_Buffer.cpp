#include <iostream>
#include <climits> 
using namespace std;
    class sensor_log{
        public:
       void Log_Buffer(){
            int nreading;
            cout<<"numbers of Readings:"<<endl;
            cin>>nreading;
            cout<<"Reading entered :"<<nreading<<endl;
                int n = nreading;
                if(n >= 1 && n <= 100){
                double arr[n];
                for(int i = 0 ; i < n ; i++){
                    cin>>arr[i];
                }
                cout<<"Valid reading :";
                 static int count = 0;
                  static double sum = 0;
                  static int counte = 0;
                for(int i = 0 ; i < n ; i++){
                    if(arr[i] <= 0){
                         count = count+1;
                        continue;  
                    }
                    
                    
                    sum = sum + arr[i];
                    cout<<arr[i]<<" ";
                    counte = counte + 1;
                }
                cout<<endl;
                cout<<"Skipped(errors) :"<<count<<endl;
                //
                double critical;
                int index;
                for(int i = 0 ; i < n ; i++){
                    if(arr[i]>=45){
                        critical = arr[i];
                        index = i;
                        cout<<"Index   "<<i<<" -> "<<arr[i]<<endl;
                        break;
                        
                    }
                }
                
               
                double min = INT_MAX;
                double max = INT_MIN;
                double avg = sum /counte;
                for(int i = 0 ; i < n ; i ++){
                    if(arr[i]<=0){
                        continue;
                    }
                    if(arr[i]<min && arr[i] != 0 ){
                        min = arr[i];
                    }
                    if(arr[i]>max){
                        max = arr[i];
                    }
                    
                }
                cout<<"Min:"<<min<<"  "<<"Max:"<<max<< "  "<<"Avg"<<avg<<endl;  
            //}vchal
            
        int cnormal=0 ;
             int cwarning=0 ;
             int ccritical=0 ;
             int cshutdown=0 ;
// 
                for(int i = 0 ;i <n ; i++){
                    if(arr[i]<=0){
                        continue;
                    }

                           
                    else if(arr[i] <= 29){
                      cnormal = cnormal + 1;
                    }
                    else if( arr[i] <= 44){
                        cwarning = cwarning +1;
                    }
                    else if( arr[i] <= 59){
                        ccritical = ccritical +1;
                    }
                    else{
                        cshutdown =cshutdown+1;
                    }

                }
                cout<<"Normal : "<<cnormal;
                cout<<"   warning : "<<cwarning;
                cout<<"   critical : "<<ccritical;
                cout<<"   shutdown : "<<cshutdown;

          //ith apatla
                }

        }

    };
int main(){
    sensor_log ss;
    ss.Log_Buffer();

}
