#include <stdio.h>
int main()
{
	char nom [30];
	int contr;
	int cont=1;
	printf("Por favor, ingrese su usuario");
	scanf("%s\n", &nom);
	printf("Ingrese la contraseña\n");
	scanf("%d", &contr);
		while(cont<3){
			cont=cont+1;
			if(contr==1234){
			printf("Bienvenido al sistema, %s", nom);
			}else if(contr!=0000){
			printf("Parece que ha habido un error, reingrese la contraseña");
			scanf("%d", &contr);	
			}
		}
		printf("Se ha superado el numero de intentos disponibles, reinice");
	}


