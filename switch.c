#include <stdio.h>

void main() {
	int x,a,b,c,d;

	printf("Ingresa un valor");

	scanf("%d", &x);
	switch(x)
	{
		case 1:
		printf("Se cumplio el caso 1\n");
		break;

		case 2:
		printf("Se cumplio el caso2\n");
		break;

		case 3:
		printf("Se cumplio el caso 3\n");
		break;

		default:
		printf("No se cumplio ninguno de los casos previos\n");
		break;
	}
}