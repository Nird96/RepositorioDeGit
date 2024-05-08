#include <stdio.h>
int main ()
{
	int n1,n2, cout, pot;
	printf("Seleccione el numero que desea elevar");
	scanf("%d", &n1);
	printf("Seleccione la potencia a la cual se elevara");
	scanf("%d", &n2);
	while(n1<=n2){
		n1=n1+1;
		pot=(n1*n1);
		printf("%d", pot);
	}
}
