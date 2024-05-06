#include <stdio.h>
#include <math.h>
int main ()
{
	int n1,n2, pot;
	printf("Seleccione el numero que desea elevar");
	scanf("%d", &n1);
	printf("Seleccione la potencia a la cual se elevara");
	scanf("%d", &n2);
	pot=pow(n1,n2);
	printf("%d", pot);
}
