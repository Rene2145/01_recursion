#include <iostream>
using namespace std;

int max(int A[], int n);

int main(){
	int A[90];
	int n;
	cout<<"A) Comienza ingresando la cantidad de elementos: ";
	cin>>n;
	
	cout<<"B) Ahora ingresa los elementos:"<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	cout<<"\nRESULTADO: \n";	
	cout<<"C) El numero mayor es: "<<max(A,n);
	return 0;
}

int max(int A[], int n){
	if(n==1){
		return A[0];
	}	
	int mayor=max(A,n-1);	
	if(A[n-1]>mayor){
		return A[n-1];
	}else{
		return mayor;
	}
}
