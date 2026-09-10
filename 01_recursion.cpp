#include <iostream>
using namespace std;
double potencia(double x, int n){
	if(n==0){
		return 1;
	}
	else{
		return x*potencia(x, n-1);
	}
}

int main(){
	double base;
	int exponente;
	cout<<"La base es :\n";
	cin>> base;
	cout<<"El exponente es :\n";
	cin>> exponente;
	cout<<"La potencia es :"<<potencia(base, exponente);
	return 0;
}
