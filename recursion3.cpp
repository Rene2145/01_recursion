#include <iostream>
using namespace std;

int buscar(int A[], int n, int m, int i);

int main(){
	int A[100];
	int n,m;
	int posicion;
	
	cout<<"A) Comienza ingresando la cantidad de elementos: ";
	cin>>n;
	
	cout<<"B) Ahora ingresa los elementos:"<<endl;
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	
	cout<<"C) Que valor a vamos a buscar: ";
	cin>>m;
	
	posicion=buscar(A,n,m,0);
	
	if(posicion==-1){
		cout<<"El numero no se pudo encontrar";
	}else{
		cout<<"\nRESUTLADO: \n";
		cout<<"El numero esta en la posicion: "<<posicion;
	}
	return 0;
}

int buscar(int A[],int n,int m,int i){
	if(i==n){
		return -1;
	}
	if(A[i]==m){
		return i;
	}
	return buscar(A,n,m,i+1);
}
