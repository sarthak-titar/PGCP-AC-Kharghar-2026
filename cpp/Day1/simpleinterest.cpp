  {{{{{{{{simple interest}}}}
#include <iostream>
using namespace std;
class ss{
public:
void show(int p,int r, int t){
	int SI =(p*r*t)/100;
	cout<< SI;
}
};
int main(){
	ss s;
	int principal,rateofint,time;
	cout<<"Enter principal rate and time"<<endl;
	cin>>principal>>rateofint>>time;



	s.show(principal,rateofint,time);


	return 0 ;
}
