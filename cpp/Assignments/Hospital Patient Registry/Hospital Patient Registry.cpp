#include<iostream>
using namespace std;
class Patient{
    int patientId;
    string name;
    int age;
    const string bloodGroup;
    string ward;
    public :
    
    Patient():patientId(0),name("unknown"),age(0),ward("General"),bloodGroup("O+"){
        // cout<<patientId<<name<<age<<ward<<bloodGroup<<endl;
        cout<<"[Constructor] Default patient registered"<<endl;
           cout<<endl;
    }

    // // Constructor 2 — Emergency admission: only id and name known
    Patient(int id, const string& name):patientId(id),name(name),age(0),ward("General"),bloodGroup("O+"){
     cout<<"[Constructor]"<<"Emergency admission:"<<name<<endl;

    }
    // // Constructor 3 — Full admission details
    Patient(int id, const string& name, int age, const string& ward,const string&
bg):patientId(id),name(name),age(age),ward(ward),bloodGroup(bg){
        
        cout<<"[Constructor]"<<"Full admission details:"<<name<<endl;
           cout<<endl;
    }
    // // Destructor — print "Patient <name> discharged." when object is destroyed
    ~Patient(){
        cout<<"[Destructor]"<<"patient"<<"  "<<name<<"  "<<"discharged"<<"  "<<endl;
    }
    
    void displayRecord() const{
        cout<<"Patient Record:-----------"<<endl;
        cout<<"ID        :"<<patientId<<endl;
        cout<<"Name     :"<<name<<endl;;
        cout<<"Age      :"<<age<<endl;
        cout<<"Ward      :"<<ward<<endl;
        cout<<"Blood Group  :"<<bloodGroup<<endl;
        cout<<"-------------------------------"<<endl;
        cout<<endl;

    }
    void transferWard(const string& newWard){
        ward = newWard;
        cout<<"Ward Transfer:"<<name<<"->"<<ward<<endl;
        cout<<endl;

    }
   

};
        
       
int main(){
    Patient p;
    Patient p1(1000,"Raj Patil");
    
    Patient p2(1001,"Meera Joshi",34,"Cardiology","B+");
    p2.displayRecord();
    p1.transferWard("ICU");
    Patient* ptr = new Patient[4];
    for(int i = 0 ;i< 4; i++ ){
        ptr[i].displayRecord();
    }
    
        delete[] ptr;
    
    

    

    return 0;
}
