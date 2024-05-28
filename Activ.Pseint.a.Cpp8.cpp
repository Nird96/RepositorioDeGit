#include <iostream>
#include <cstdlib>
using namespace std;

int main()  
{
	int num[10];
	for (int i=1;i<10;i++){
		num[i]=rand()%100;
	}
	for(int i=1;1<10;i++){
		cout<<"los numeros aleatorios son "<<num[i]<<endl;
	}
	return 0;
}
