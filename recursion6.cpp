#include <iostream>
using namespace std;

int serie(int n);

int main(){
int n;
	cout<<"Ingresa la posicion: ";
	cin>>n;
	cout<<"El elemento sera: "<<serie(n);
	return 0;
}

int serie(int n){
	if(n==1){
		return 4;
	}else if(n==2){
		return 6;
	}else{
		return serie(n-1)+serie(n-2);
	}
}
