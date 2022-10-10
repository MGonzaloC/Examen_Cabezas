#include<iostream>

using namespace std;


int main(){
	
	int x, suma = 0;
    cout<<"Ingrese el numero de elemtos de la sumatoria:\n";
    cin>>x;
    for (int i=1; i<=x;i++){
      suma += i;
   }
	cout<<"\nLa suma de los "<<x<<" primeros numeros naturales es "<<suma;
       
	return 0;
}
