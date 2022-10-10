#include<iostream>

using namespace std;


int main(){
	
	int x,y,aux;
    cout<<"Ingrese el primer valor:\n";
    cin>>x;
    cout<<"Ingrese el segundo valor:\n";
    cin>>y;
	aux=x;
	x=y;
	y =aux;
	cout<<"Valores intercambiados: \n";
    cout<<" x ="<<x;    
    cout<<"\n y ="<<y;
   
    return 0;
}
