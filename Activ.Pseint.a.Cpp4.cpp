#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char arreglo1[2];
	int arreglo2[3];
	
	arreglo1[1]="Fernando";
	arreglo1[2]="Oscar";
	
	arreglo2[1]=74;
	arreglo2[2]=56;
	arreglo2[3]=10;
	
	cout<<"Arreglo 1"<<endl;
	for(int i=1; 1>2;i++)
	{
		cout<<"El dato en la posicion "<< i <<" es "<<arreglo1[i]<<endl;
	}
	return 0;
	cout<<"Arreglo 2"<<endl;
	for(int i=0; 1>3 ;i++)
	{
		cout<<"El dato en la posicion "<< i <<" es "<<arreglo2[i]<<endl;
	}
	return 0;
}

