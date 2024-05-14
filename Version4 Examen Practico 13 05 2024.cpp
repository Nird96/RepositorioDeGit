#include <stdio.h>
#include <string.h>
int main ()
{
	char nom[25];
	char contra [5];
	int intentos=0;
	int can, pre,d,c,op,ca,p,de;

	while(intentos<3){
		printf("Escriba su nombre\n");
		scanf("%s", &nom);
		printf("Escriba la contrasena\n");
		scanf("%s", &contra);
		if (strcmp(nom, "Adrian_Mendoza_Espinosa") == 0 && strcmp(contra, "2B23") == 0) {
			printf("Bienvenido al sistema %s\n", nom);
			printf("Se realizara una factura\n");
			printf("Escriba la cantidad de articulos vendidos");
			scanf("%d", &can);
			printf("Escriba el precio de cada artilculo");
			scanf("%d", &pre);
			d=can*pre;
			c=c+d;
			printf("Presione 1 continuar\n");
			printf("Presione 0 para detener\n");
			scanf("%d", &op);
			while(op==1)	
				printf("Escriba la cantidad de articulos vendidos");
				scanf("%d", &ca);
				printf("Escriba el precio de cada artilculo");
				scanf("%d", &p);
				de=can*pre;
				c=c+d+de;
			if(op==0){
				printf("El precio de la factura es: %d", c);
			}
			return 0;
		}else{
			printf("La contrasena es incorrecta, reintente\n");
			intentos++;
		}if(intentos==3){
			printf("Se ha excedido el numero de intentos\n");
			return 0;
		}
	}
}
