#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Hipotenusa()
{
	int co,ca;
	float hip;
	printf("Introduzca el valor del Cateto opuesto");
	scanf("%d",&co);
	printf("Introduzca el valor del Cateto adyacente");
	scanf("%d",&ca);
	hip=sqrt((co^2)+(ca^2));
	printf("La hipotenusa es: %f\n", hip);
}


void AreaCua()
{
	int lMen,lMA;
	int area;
	printf("Introduzca el valor del Lado menor");
	scanf("%d",&lMen);
	printf("Introduzca el valor del Lado mayor");
	scanf("%d",&lMA);
	area=lMen*lMA;
	printf("El area es: %d\n",area);
}

void AreaT()
{
	int base,altura;
	float area;
	printf("Introduzca el valor de la base");
	scanf("%d",&base);
	printf("Introduzca el valor de la altura");
	scanf("%d",&altura);
	area=(base*altura)/2;
	printf("El Area es: %f",area);
}

void Angulo()
{
	float a1,a2,a3;
	printf("Introduzca el valor del angulo 1");
	scanf("%f",&a1);
	printf("Introduzca el valor del angulo 2");
	scanf("%f",&a2);
	a3=180-(a1+a2);
	printf("El Valor de el angulo es: %f\n",a3);
}

int main ()
{
	int N;
	do{
	printf("Ingrese la opcion deseada:\n");
	printf("1.-Hipotenusa\n2.-Area de rectangulos o cuadrados\n3.-Area de triangulo\n4.-Angulo\n5.-Salida\n");
	scanf("%d",&N);
	switch (N)
	{
		case 1:
			Hipotenusa();
		break;
		case 2:
			AreaCua();
		break;
		case 3:
			AreaT();
		break;
		case 4:
			Angulo();
		break;
		case 5:
			printf("Vuelva pronto");
		break;
		default:
			printf("El valor que ingreso no se encuentra entre las opciones");
			N=5;
		break;
	}
	}while(N!=5);
}


