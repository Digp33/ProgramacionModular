#include <stdio.h>
#include <stdlib.h>
//Inicialización de la funcion Cuadrados
int main(int x) {
	/*Se declaran las variables, enteras para los datos de entrada del usuario,  flotantes para los valores a obtener
	 puesto que podría haber divisiones que hagan que el resultado tenga punto decimal*/
	int ladoCua,ladoRe,ladoTra;
	float resultadoArea;
	float resultadoPerimetro;
	//Variable entera para la selección de la accion de la función
	int selec;
	//Se inicia el Do-while que acabará cuando se ponga la opcion de salida, si mete un dato erroneo dará un mensaje de alerta
	do
	{
		//Solicitar al usuario la opcion deseada
		printf("Que desea obtener?:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo\n5)Area de un trapecio\n6)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			//Area de un cuadrado, se solicita el lado como dato de entrada
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			resultadoArea=ladoCua*ladoCua;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 2:
			//Perimetro de un cuadrado, se solicita el lado como dato de entrada
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			resultadoPerimetro=ladoCua*4;
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 3:
			//Area de un rectangulo, se solicitan los lados como datos de entrada
			printf("Ingrese el lado menor del rectangulo \n");
			scanf("%d",&ladoCua);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			resultadoArea=ladoCua*ladoRe;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 4:
			//Perimetro de un rectangulo, se solicitan los lados como datos de entrada
			printf("Ingrese el lado menor del rectangulo\n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			resultadoPerimetro=((ladoCua*2)+(ladoRe*2));
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 5:
			//Area de un trapecio, se solicitan los lados como datos de entrada así como la altura
			printf("Ingrese el lado menor del Trapecio\n");
			scanf("%d",&ladoCua);
			fflush(stdin);
			printf("Ingrese el lado mayor del trapecio \n");
			scanf("%d",&ladoRe);
			fflush(stdin);
			printf("Ingrese la altura del trapecio \n");
			scanf("%d",&ladoTra);
			fflush(stdin);
			resultadoArea=((ladoCua+ladoRe)*ladoTra)/2;
			printf("\nEl area es: %f\n", resultadoArea );
			break;
		case 6:
			//la opción 6 marca la salida de la función
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}
	}while(selec!=6);
	return 0;
}