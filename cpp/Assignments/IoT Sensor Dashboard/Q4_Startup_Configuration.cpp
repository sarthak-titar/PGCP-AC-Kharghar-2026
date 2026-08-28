#include <iostream>
using namespace std;
int main(int argc , char* argv[]){
    cout<<"total arguments received:"<<argc<<endl;
    if(argc == 4){
        double w = stod(argv[1]);
        double c = stod(argv[2]);
        double r = stod(argv[3]);
        static int Normal= 0;
        static int warning= 0;
        static int critical= 0;
        static int shutdown= 0;

        
            if(w<c || 1>=r<=500){
                cout<< "Warn=3"<<w<<"  "<<" Critical="<<c<<" "<<"Readings="<<r<<endl;
                for(int i = 0 ; i<10;i++){
                    int random = (rand()%70) ;
                    if(random <= 0 && random >= 0){
                        Normal++;
                    }
                    else if(random >= 30 && random <=44){
                        warning++;
                    }
                    else if(random >=45 && random <= 59){
                        critical++;

                    }
                    else{
                        shutdown++;

                    }
                }
                cout<<"Normal  "<<Normal<<"   "<<"Warning"<<warning<<"   "<<"Critical"<<critical<<"   "<<"shutdown"<<shutdown<<"  "<<endl;

            }
            else{
                cout<<"invalide threshold"<<endl;
            }
        
      

    }
    else{
         cout<<"Error   : Missing arguments."<<endl; 
    }
    
    return 0 ;
}
