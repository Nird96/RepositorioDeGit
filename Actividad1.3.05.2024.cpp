#include <stdio.h>
int main ()
{
	int cout, n, a, b, c;
	printf("Escriba la cantidad de terminos a mostrar en la pantalla de la serie numerica 5");
	scanf("%d", &n);
	c=n*5;
		for(int i=1; i <=c; i++){
		cout<<i;
		i=i+5-1;
		printf("%d\n", i);
	}
}
//Aprendiendo a hacer modificaciones a traves de commit
