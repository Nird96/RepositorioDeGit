#include <iostream>
using namespace std;
int main()
{
int pos, nombre,n,i;
	cout<<"digite el numero de paises "<<endl;
	cin>>n;
	int paises[n];
	for (i=1;n-1;i++){
		cout<<"digite pais "<<i<<endl;
		cin>>nombre;
		paises[i]=nombre;
	}
	cout<<"digite la posicion "<<endl;
	cin>>pos;
	cout<<" el pais que hay en la posicion "<<pos<<" es "<<paises[pos]<<endl;
}
