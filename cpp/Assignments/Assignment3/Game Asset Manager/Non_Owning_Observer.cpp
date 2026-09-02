#include<iostream>
#include<memory>
using namespace std;

class AudioClip{
    string name;
    int vertex;
    public:
    AudioClip(string name,int vertex){
        this->name = name;
        this->vertex =vertex;
        cout<<"AudioClip Loaded"<<endl;
    }
    string getName(){
        return name;
    }
    
};

    
int main(){
    
auto audio = make_shared<AudioClip>("explosion",3.5); //shared pointer 
weak_ptr<AudioClip> observer = audio;    //weak pointer for observer it cannot own  any object
if (auto clip = observer.lock())      //lock() is used with weak_ptr to try to access the object.or get shared_ptr
 cout << "Clip alive: " << clip->getName() << endl;
audio.reset();      //release this shared_ptr's ownership

if (observer.expired())   //Check whether object is already gone  true/false
 cout << "Clip already unloaded." << endl;

    return 0 ;

}
