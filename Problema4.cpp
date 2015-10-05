#include <iostream>

using namespace std;

int fac(int _x){

	int y=1;
	for(int i=1;i<=_x;i++){y=y*i;}
	cout<<y<<endl;

}

int main(){

	int x;
	cin>>x;
	fac(x);

}
