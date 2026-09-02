#include<iostream>
#include<memory>
using namespace std;
class shader{
    string name;
    string vertex;
    public:
    shader(string name, string vertex){
        this->name = name;
        this->vertex = vertex;
        cout<<"shader compiled"<<endl;
    }

    
    ~shader(){
        cout<<"shader Destroyed"<<endl;
    }

};
int getReferenceCount(auto &ptrr) {
    return ptrr.use_count();
}    
int main(){
   

shared_ptr<shader> ptr4 = make_shared<shader>("main_ver","vertex");
cout<<"ptr4  :"<<getReferenceCount(ptr4)<<endl;{
    auto ptr5 = ptr4;
    cout<<"ptr5  :"<<ptr4.use_count()<<endl;
    auto ptr6 = ptr4;
    cout<<"ptr5  :"<<ptr4.use_count()<<endl;
}
cout<<"ptr5  :"<<ptr4.use_count()<<endl;




    return 0 ;

}
