//Se delcaran las librerías a implementarse
#include <stdio.h>
#include <stdlib.h>
//Se inicia con la funcion de conversiones
int main(int argc, char *argv[]) {
	//Se crean las variables de entrada y de salida, para esta ocacion se solicitan float ya que pueden tener decimales
	float celciusG,farenheitG,kelvinG;
	float resultadoCelcius,resultadoFarenheit,resultadoKelvin;
	//se crea el selector del case
	int selec;
	do
	{
		// Se pide al usuario que ingrese la opcion solicitada
		printf("Ingrese que grados va a ingresar:\n1)Celcius\n2)Kelvin\n3)Farenheit\n4)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch(selec)
		{
		case 1:
			//Convierte los grados Celcius a farenheit y a kelvin
			printf("Ingrese los grados \n");
			scanf("%f",&celciusG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoFarenheit=(celciusG*(1.8))+32;
			resultadoKelvin=celciusG+ 273.15;
			printf("Los grados en Farenheit son: %f\n", resultadoFarenheit);
			printf("Los grados en Kelvin son: %f\n", resultadoKelvin);
			fflush(stdin);
			break;
		case 2:
			//convierte los grados farenheit a celcius y kelvin
			printf("Ingrese los grados \n");
			scanf("%f",&farenheitG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoCelcius=(farenheitG-32)*(.555);
			resultadoKelvin=((.555)*(farenheitG-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", resultadoKelvin);
			printf("Los grados en Celcius son: %f\n", resultadoCelcius);
			fflush(stdin);
			break;
		case 3:
			//convierte los grados kelvin a celcius y a  farenheit
			printf("Ingrese los grados \n");
			scanf("%f",&kelvinG);
			fflush(stdin);
			//operaciones para hacer los cambios a las otras dos formas de grados
			resultadoCelcius=kelvinG-273.15;
			resultadoFarenheit=((kelvinG-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", resultadoCelcius);
			printf("Los grados en Farenheit son: %f\n", resultadoFarenheit);
			fflush(stdin);
			break;
		case 4:
			printf("Saliendo....\n");
			break;
		default:
			//mensaje de error en entrada
			printf("\nIncorrecto, seleccione una opción valida\n");
			fflush(stdin);
			break;
		}

	}while(selec!=4);
	return 0;
}