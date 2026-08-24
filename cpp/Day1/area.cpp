#include <iostream>
using namespace std;
int main(){
	char a ;
	cout<<"Enter your choice:"<<endl;
	cin>>a;
	switch (a){
	case 's':{
		int sid;
		cout<<"Enter side of square"<<endl;
		cin>>sid;
		cout<<"Area of square is:"<<sid*sid;
		break;
	}
	case 'r':{
		int base;
		int height;
		cout<<"Enter base and height of rectangle "<<endl;

		cin>>height>>base;
		cout<<"Area of rectangle:"<<base*height;
		break;
	}
	case 'c':{
		int r;
		cout<<"Enter radius:"<<endl;
		cin>>r;
		cout<<"area of circle:"<<3.14*r*r;
		break;
	}
	default:
		cout<<"hugdscytfs";
		break;

	}
	return 0 ;

}



}
