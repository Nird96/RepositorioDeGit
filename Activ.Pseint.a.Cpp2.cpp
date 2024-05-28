#include <iostream>
using namespace std;
int main ()
{
	int n,nombre;
	cout<<"Digite el numero de posiciones"<<endl;
	cin>>n;
	int personas[n];
	for(int i=0; n-1 ;i++)
	{
		cout<<"Digite un nombre para la posicion "<<i<<endl;
		cin>>nombre;
		personas[i] = nombre;
	}
	return 0;
	
	for(int i=0; n-1;i++)
	{
		cout<<"El dato en la posicion "<< i <<" es "<<personas[i]<<endl;
	}
	return 0;
	
}
