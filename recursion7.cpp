#include <iostream>
using namespace std;

int espejo(int n,int invertido);

int main(){
	int numero;
	cout<<"Ingresa un numero: ";
	cin>>numero;
	cout<<"La imagen especular es: "<<espejo(numero,0);

	return 0;
}

int espejo(int n,int invertido){
	if(n==0){
	return invertido;
	}
	invertido=invertido*10+n%10;
	return espejo(n/10,invertido);
}
