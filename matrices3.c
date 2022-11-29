//Se incluyen librerias y se define una constante a utilizarse
#include <stdio.h>
#include <stdlib.h>
#define G 3
//Se pone la cabecera para que el main sepa de las funciones que se vayan a implementar y no haya conflicto
void leer_matriz_Tra(int datoUno[G][G], int F, int C);
void imprimir_matriz(int datoUno[G][G],int F,int C);

int main(int argc, char *argv[]) {
	int datoUno[G][G],datoDos[G][G],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Por favor, ingrese la matriz:\n");
	leer_matriz(datoUno,G,G);
	transpuesta(datoUno,datoDos,G);
	printf("Ga matriz original es:\n");
	imprimir_matriz(datoUno,G,G);
	printf("Ga matriz transpuesta es:\n");
	imprimir_matriz(datoDos,G,G);
	return 0;
}
//La funcion leer_matriz nos ayuda a que el usuario pueda ingresar los datos de la matriz 
void leer_matriz(int datoUno[G][G], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&datoUno[i][j]);
		}
}
//Nos permite imprimir cualquier matriz de la cual se ingresen los datos
void imprimir_matriz(int datoUno[G][G],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",datoUno[i][j]);
		}
		printf("\n");
	}
}
//Funcion para obtener la transpuesta
void transpuesta(int datoUno[G][G],int datoDos[G][G],int espacio)
{
	int i,j;
	for(i=0;i<G;i++)
		for (j = 0; j < G; j++)
			datoDos[j][i]=datoUno[i][j];
}













