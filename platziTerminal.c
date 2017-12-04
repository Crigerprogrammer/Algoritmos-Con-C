#include <stdio.h>
#include <string.h>
//strcmp
void main() 
{
	char userName[25];
	int decision;
	int bucle = 1;
	int estudiando = 1;

	while(bucle == 1)
	{	
		
		printf("Bienvenido a Platzi Terminal\n");
		printf("Ingresa tu nombre de usuario: \n");
		scanf("%s", userName);

		printf("Bienvenido %s, vamos a acceder a tu seccion\n", userName);

		if(strcmp(userName,"julian")==0)
		{
			while(estudiando == 1)
			{
				printf("Esto es PlatziTerminal Free edition, que deseas hacer?\n");
				printf("Ingrese 1 para estudiar, \n 2 para leer el blog \n Ingrese cualquier otro valor para salir");
				scanf("%d", &decision);
				if(decision == 1)
				{
					printf("Estas en la seccion de estudio, saca el maximo provecho\n");
				}
				else if(decision == 2)
				{
					printf("Estas en el blog, aprovechalo!\n");
				}
				else 
				{
					printf("GoodBye!");
					estudiando = 2;
				}
			}
		}
		else if(strcmp(userName,"juliana")==0)
		{
			printf("Esto es PlatziTerminal Standar edition, que deseas hacer?\n");
			printf("Ingrese 1 para estudiar, \n 2 para leer el blog \n Ingrese cualquier otro valor para salir");
			scanf("%d", &decision);
			if(decision == 1)
			{
				printf("Estas en la seccion de estudio, saca el maximo provecho\n");
			}
			else if(decision == 2)
			{
				printf("Estas en el blog, aprovechalo!\n");
			}
			else 
			{
				printf("GoodBye!");
			}
		}
		else if(strcmp(userName,"paula")==0)
		{
			printf("Esto es PlatziTerminal Premium edition, que deseas hacer?\n");
			printf("Ingrese 1 para estudiar, \n 2 para leer el blog \n 3 Mentoria \n Ingrese cualquier otro valor para salir");
			scanf("%d", &decision);
			if(decision == 1)
			{
				printf("Estas en la seccion de estudio, saca el maximo provecho\n");
			}
			else if(decision == 2)
			{
				printf("Estas en el blog, aprovechalo!\n");
			}
			else if(decision == 3)
			{
				printf("Estas en la seccion de solicitud de Mentorias");
			}
			else 
			{
				printf("GoodBye!");
			}
		}
		else
		{
			printf("No eres un usuario registrado, o escribiste mal tu nombre\n");
			printf("Porfavor prueba de nuevo porfavor\n");
		}
}

}