#include <stdio.h>
int main ()
{
	int n, sum, co;
	int contador = 0;
	printf("Escriba un numero para comenzar");
	scanf("%d", &n);
	while(n!=0){
		printf("Escriba un numero");
		scanf("%d", &n);
		printf("Haz introducido el numero: %d\n", n);
		sum=sum+n;
		contador=contador+1;
		if(n==0){
			printf("Finalizando\n");
			printf("Suma del valor de los numeros ingresados: %d\n", sum);
			printf("Cantidad de numeros ingresados: %d", contador);
		}
	}
}
