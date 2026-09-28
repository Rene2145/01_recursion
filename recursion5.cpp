#include <iostream>
using namespace std;

int main(){
	cout<<"Ingrese un numero decimal: ";
	cin>>num;
	cout<<"En binario es: ";
	binario(num);
	return 0;
}
	return 0;
}

void binario(int n){
	if(n<2){
		cout<<n;
	}else{
		binario(n/2);
		cout<<n%2;
	}
}


