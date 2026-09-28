#include <iostream>
using namespace std;

void binario(int n);

int main(){
	int num;
	cout<<"Ingresa un numero decimal: ";
	cin>>num;
	cout<<"En binario es: ";
	binario(num);
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


