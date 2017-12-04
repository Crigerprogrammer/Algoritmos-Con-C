#include <stdio.h>

void main()
{
	int a,b,c,d;

	printf("Agregue los valores");

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	if(a>b){
		printf("A es mayor que B\n");
	}
	else if (a>c)
	{
		printf("A es mayor que C\n");
	}
	else if (a>d)
	{
		printf("A es mayor que D\n");
	}
	else
	{
		printf("A no es mayor que B, C, ó D\n");
	}
}