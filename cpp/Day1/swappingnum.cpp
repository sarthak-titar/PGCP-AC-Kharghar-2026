#include <iostream>
using namespace std;
int main(){
	int a;
	int b;
	cout<<"Enter two numbers::"<<endl;
	cin>>a;
	cin>>b;
	cout<<"before swapping numbers"<<endl;
	cout<<a<<"\n"<<b<<endl;
	int temp =a;
	a = b;
	b = temp;
	cout<<"after swapping numbers"<<endl;
	cout<<a<<"\n";
	cout<<b;
	return 0 ;
}
