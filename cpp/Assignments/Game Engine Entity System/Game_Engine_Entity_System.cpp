#include <iostream>
using namespace std;
class Entity{
    string name;
    int health;
    int level;
    string type ;
    public :
    // this       → address of current object (pointer)
    // *this      → current object
    // this->name → current object's name
    Entity& setName(const string& name){
       this->name = name;
        return *this;
    }
    Entity& setHealth(int health){
        this->health=health;
        return *this;
    }
    Entity& setLevel(int level){
        this->level=level;
        return *this;
    }
    Entity& setType(const string& type){
         this->type=type;
        return *this;
    }
    string getName() const{
        return name;
    }
    int getHealth() const{
        return health;
    }
    int getLevel() const{
        return level;
    }
    string getType() const{
        return type;
    }
    void displayInfo() const{
        cout<<"------------------"<<endl;
        cout<<"Entity Information:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Health:"<<health<<endl;
        cout<<"Level:"<<level<<endl;
        cout<<"Type:"<<type<<endl;
        cout<<endl;

    }
 


};
namespace Physics {
    double clamp(double val, double min, double max){
        if (val < min){
            return min;
        }
        if (val > max){
            return max;
        }
        else{
            return val;
        }
    } 
    double lerp(double a, double b, double t){
        double ans = a+(b-a)*t;
        return ans ;
    } 
    
    }
    namespace GameMath {
    int clamp(int val, int min, int max){
        if (val < min){
            return min;
        }
        if (val > max){
            return max;
        }
        else{
            return val;
        }
    } 
    
    double lerp(double a, double b, double t){
        double ans = a+(b-a)*t;
        return ans ;
    }
    }
int main(){
    Entity player,enemy,item;
    player.setName("Aragorn").setHealth(100).setLevel(10).setType("player").displayInfo();
    enemy.setName("Orc").setHealth(60).setLevel(5).setType("Enemy").displayInfo();
    item.setName("HealthPosition").setHealth(0).setLevel(1).setType("item").displayInfo();


        {
                using namespace Physics;
                cout<<"clamp   :"<<clamp(120.0,0,100)<<endl;
                cout<<"lerp   :"<<lerp(0,100,0.5)<<endl;
                cout<<endl;

        }
        {   
            using namespace GameMath;
              cout<<"clamp   :"<<clamp(120,0,100)<<endl;
                cout<<"lerp   :"<<lerp(10,20,0.25)<<endl;
        }
        int r;
        int c;
        cout<<"Enter the row numbers:"<<endl;
        cin>>r;
        cout<<"ENter the column numbers:"<<endl;
        cin>>c;

        int** arr = new int*[r];
        for(int i = 0 ; i < r;i++){
            arr[i] = new int[c];
        }
        for(int i = 0 ; i < r; i++){
            for(int j= 0;j<c;j++){
                arr[i][j] = rand() % 5;
            }
        }
        cout<<"---------------------------------"<<endl;
         for(int i = 0 ; i < r; i++){
            for(int j= 0;j<c;j++){
                cout<< arr[i][j] <<" ";
            }
            cout<<endl;
        }
        // Legend: 0=Grass 1=Water 2=Mountain 3=Forest 4=Dungeon
        static int grass = 0; 
        static int water = 0; 
        static int mountain = 0; 
        static int forest = 0;
        static int dungeon = 0 ; 
        for(int i = 0 ; i < r; i++){
            for(int j= 0;j<c;j++){
                if (arr[i][j]==0){
                    grass++;
                }
                else if(arr[i][j]==1){
                    water++;
                }
                else if(arr[i][j]==2){
                    mountain++;
                }
                else if(arr[i][j]==3){
                    forest++;
                }
                else if(arr[i][j]==4){
                    dungeon++;
                }
                else{
                    cout<<endl;
                }

            }

        }
        cout<<"--------------------------------"<<endl;
        cout<<"Tile Count:"<<endl;
        cout<<"Grass     :"<<grass<<endl;
        cout<<"Water     :"<<water<<endl;
        cout<<"Mountain  :"<<mountain<<endl;
        cout<<"Forest    :"<<forest<<endl;
        cout<<"Gungeon   :"<<dungeon<<endl;

    return  0;


}
