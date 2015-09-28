#include <iostream>
using namespace std;


int main(){

	float m[7];
	float a;
	float b;
	for(int i=0;i<8;i++){
		cin>>m[i];
	}
	a=m[0];	
	for(int i=1;i<8;i++){
		if(m[i]<m[i-1]){
			a=m[i];
		}else{
			b=m[i];
		}
		
	}
	cout<<"------------------------------------------------------------"<<"\n";
	cout<<a<<"\n";
	cout<<b<<"\n";
	

}
