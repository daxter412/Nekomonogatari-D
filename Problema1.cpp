#include <iostream>

using namespace std;


int CrM(int _a[_f][_c]){
	

	for(int i=0;i<_f;i++){
		for(int e=0;e<_c;e++){
			int y;
			cin<<y;
			_a[i][e]=y;

		}

}


void ImpM(int _a[_f][_c]){

	for(int i=0;i<_f;i++){
		for(int e=0;e<_c;e++){
			cout<<_a[i][e];

		}
		cout<<"\n";
	}

}


int mult(int _a[_f1][_c1], int _b[_f2][_c2]){

	if (_c1==_f2){

		int c[_c1][_f2];
		for(int i=0;i<_f1;i++){
			for(int e=0;e<_c2){

				c[i][e]

			}
		}

	}else{cout<<"No se pueden multiplicar esas matrices"<<endl;}
}

	

}


int main(){

	int f1,f2,c1,c2;
	cout<<"Filas"<<endl;
	cin>>f1;
	cout<<"Columnas"<<endl;
	cin>>c1;
	int a[f1][c1];
	CrM(a);

}
