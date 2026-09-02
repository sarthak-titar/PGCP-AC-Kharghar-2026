#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;
enum class HttpsStatus{
    Ok=200,Created=201,BadRequest=400,Unauthorized=401,NotFound=404,ServerError=500
    
};
using Header = pair<string, string>;
using HeaderList = vector<Header>;
using Port = unsigned int;
using IPAddress = string;
typedef unsigned long long RequestId;

void  handleResponse(HttpsStatus status,const string& endpoint){
    
    // cout<<static_cast<int>(status)<<endl;
    // cout<<endpoint<<endl;
    switch(static_cast<int>(status)){
        case 200 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"Request successful"<<endl;
        break;
        }
        case 201 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"Created"<<endl;
        break;
        }
        case 400 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"BadRequest"<<endl;
        break;
        }
         case 401 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"Authentication required"<<endl;
        break;
        }
         case 404 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"Endpoint does not exist"<<endl;
        break;
        }
         case 500 :{
            cout<<"["<<endpoint<<"]"<<"->"<<static_cast<int>(status)<<"Internal server error — retry later"<<endl;
        break;
        }
    }



}

 Port serverport = 8010;
 IPAddress ip = "192.168.1.10";
void printHeaders(const HeaderList& header) {
    cout<<"Request ID     :"<<ip<<endl;
    cout<<"Server Port     :"<<serverport<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"Headers:"<<endl;
    for (const Header& header : header)
    {
        cout << header.first << " : " << header.second << endl;
    }
}


int main(){
    
    handleResponse(HttpsStatus::Ok,"get/api/user");
     handleResponse(HttpsStatus::Unauthorized,"POST /api/login");
      handleResponse(HttpsStatus::NotFound,"GET /api/products/99");
       handleResponse(HttpsStatus::ServerError,"POST /api/order");
  

    HeaderList Header ={

{"Content-Type ", "application/json"},
{"Authorization" ,"Bearer eyJhbGci..."},
{"Accept-Language" , "en-US"}

    };
     printHeaders(Header);
}
