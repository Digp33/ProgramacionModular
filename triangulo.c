#include <stdio.h>
#include <stdlib.h>
//#include "triangulo.h"
int main(int x) {
	//Declaramos las variables a utilizar tanto para que el usuario digite los datos como para los resultados
	int sideA,sideB,sideC;
	int altura;
	float resultadoArea;
	float resultadoPerimetro;
	//Declaramos la variable que nos va a dar pauta a el uso del Switch-case y el Do-while
	int selec;
	//Inicializamos el Do-while el cual se va a 
	do
	{
		//Se le pide al usuario que ingrese la opcion deseada
		printf("Que desea obtener?:\n 1)Area del triangulo\n2)Perimetro de un triangulo\n3)Regresar/terminar\n");
		scanf("%d",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			//Si selecciona la opcion uno se le van a pedir los datos para obtener el area
			printf("Ingrese la base del triangulo: \n");
			scanf("%d",&sideA);
			fflush(stdin);
			printf("Ingrese la altura del triangulo: \n");
			scanf("%d",&altura);
			fflush(stdin);
			resultadoArea=((sideA*altura)/2);
			printf("El resultado es: %f\n", resultadoArea);

			break;
		case 2:
			//Si selecciona la opción dos se le piden los datos para obtener el perimetro
			printf("Ingrese el lado A del triangulo: \n");
			scanf("%d",&sideA);
			fflush(stdin);
			printf("Ingrese el lado B del triangulo: \n");
			scanf("%d",&sideB);
			fflush(stdin);
			printf("Ingrese el lado C del triangulo: \n");
			scanf("%d",&sideC);
			fflush(stdin);
			resultadoPerimetro=sideA+sideB+sideC;
			printf("El resultado es: %f\n", resultadoPerimetro);
			break;
		case 3:
			//la opción tres es la salida de la función triangulo

			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			//El default es por si no ingresa ningun valor indicado
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}
	}while (selec!='3');
	return 0;
}