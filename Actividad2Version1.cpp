#include <stdio.h>
int main()
{
	int a,b,c,sum;
	printf("Escriba su primer numero");
	scanf("%d", &a);
	printf("Escriba su segundo numero");
	scanf("%d", &b);
	printf("Escriba su tercer numero");
	scanf("%d", &c);
	sum=a+b+c;
	if(a>b && b>c){
		printf("El orden de los numeros es: %d %d %d", a,b,c);
	}else if(a>c && c>b){
		printf("El orden de los numeros es: %d %d %d", a,c,b);
	}else if(b>a && a>c){
		printf("El orden de los numeros es: %d %d %d", b,a,c);
	}else if(b>c && c>a){
		printf("El orden de los numeros es: %d %d %d", b,c,a);
	}else if(c>a && a>b){
		printf("El orden de los numeros es: %d %d %d", c,a,b);
	}else if(c>b && b>a){
		printf("El orden de los numeros es: %d %d %d", c,b,a);
	}
}

