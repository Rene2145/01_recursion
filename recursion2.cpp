#include <iostream>
using namespace std;


int sumarArreglo(int A[], int n);

int main(){
	int A[90];
	int n;
	
	cout<<"Ingresa una cantidad de elementos: ";
	cin>>n;
	
	cout<<"Ingresa los elementos:"<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"\nRESULTADO: \n";
	cout<<"La suma es: "<<sumarArreglo(A,n);
	
	return 0;
}

int sumarArreglo(int A[], int n){
	if(n==0){
		return 0;
	}else{
		return A[n-1]+sumarArreglo(A,n-1);
	}
}
