#include <stdio.h>
int main()
{
	int horas, pago, b, a, e;
	float c, d, f, g;
	printf(" Horas: ");
	scanf("%d", &horas);
	printf(" Pago: ");
	scanf("%d", &pago);
	a=horas*pago;
	if(horas<40){
		printf(" Su pago en horas normales es de: %d", a);
	}
	if(horas>=40){
		b=horas-40;
		c=b*pago;
		d=a-c;
		printf(" Su pago en horas normales es de: %.2f", d);
	}else if(horas>40 && horas<=50){
		e=horas-40;
		f=e*1.5;
		g=a+f;
		printf(" Su pago total es de:%.2f", g);
	}
}

