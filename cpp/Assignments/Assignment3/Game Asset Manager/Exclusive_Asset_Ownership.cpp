#include<iostream>
#include<memory>
using namespace std;
class Texture{
     string name;
    int width;
    int height;
public:
    Texture(string name, int width,int height){
          cout<<"texture Loaded"<<endl;
        this->name = name;
        this->width = width;
        this->height = height;
        display();

      
    }

    void display() const{
        cout<<"name    :"<<name<<endl;
        cout<<"width    :"<<width<<endl;
        cout<<"height    :"<<height<<endl;
    }
    ~Texture(){
        cout<<"Texture Released"<<endl;
    }


};
    
int main(){
    auto ptr = make_unique<Texture>("player_sprite",512,512);
    // ptr<Texture> ptr2 = ptr; --->make_unique<Texture> thiis line say 
    // that[ ptr ]is unique pointer which is type of smart pointer
    // where We don't need to manually release the memory where unique pointer -->> has only one owner
    // and we cannot copy ptr But we change the owner using move

   auto ptr2 =  move(ptr);
//    if(ptr == nullptr){
//     cout<<"ptr become null pointer"<<endl;
//    }
//     else{
//         cout<<"eqigruf"<<endl;
//     }
    cout << "ptr is null: "<<((ptr == nullptr)? "Yes":"NO")<<endl;
    cout << "ptr2 is null: "<<((ptr2 == nullptr)? "Yes":"NO")<<endl;
// 

    return 0 ;

}
