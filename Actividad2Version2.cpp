#include <iostream>
using namespace std;
int main()
{
	int num[10];
	printf("ingrese 10 numeros");
	for(int i=0; i<=8; i++){
	scanf("%d\n", num);
	}
	for (int i = 0; i < 9; ++i) {
        for (int x = 0; x < 9 - i; ++x) {
            if (num[x] < num[x + 1]) {
                int temp = num[x];
                num[x] = num[x + 1];
                num[x + 1] = temp;
            }   
        }
	}
	cout << "Los numeros ordenados de mayor a menor son:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << num[i] << " ";
    }
    cout << endl;
}
