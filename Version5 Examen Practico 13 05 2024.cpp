#include <stdio.h>
#include <string.h>
int tot (int can,int pre);
int ca (int c,int d);
int main ()
{
	char nom[25];
	char contra [5];
	int intentos=0;
	int can, pre;
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
			printf("%d", tot);
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

	int tot (int can,int pre){
		int d=can*pre;
		printf("%d", d);
	}
	int ca (int c,int d){
		int ca=ca+d;
		printf("El total a cobrar es: %d", ca);
	}
