#include <iostream>
using namespace std;
int main(){
	cout<<"Enter a number::"<<endl;
	int a;
	int b;
	cin>>a;
	cin>>b;
	int power = 1 ;
	for(int i = 1 ; i <= b ; i++){
		 power = power*a;
	}

	cout<<power;
	return 0;
}
