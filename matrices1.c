//Se incluyen librerias y se define una constante a utilizarse
#include <stdio.h>
#include <stdlib.h>
#define N 10
//para que no se trabe el programa se pone en la cabecera las funciones a utilizarse en el main
void leer_matriz(int datoUno[N][N], int F, int C);
void imprimir_matriz(int datoUno[N][N],int F,int C);
void suma_matriz(int datoUno[N][N],int datoDos[N][N],int matrizResultado[N][N], int F);

//se inicializa el main de matrices uno
int main(int argc, char *argv[]) {
	//se definen las variables enteras y los arreglos
	int F,C, i,j;
	int matrizUno[N][N],matrizDos[N][N];
	int matrizResultado[N][N];
	//se pide al usuario que ingrese los datos de la matriz uno
	printf("Ingrese la dimension de la matriz MxM\n");
	scanf("%d",&F);
	printf("Primer matriz\n");
	leer_matriz(matrizUno,F,F);
	//Solicitamos los datos de la matriz dos
	printf("Segunda matriz\n");
	leer_matriz(matrizDos,F,F);
	//una vez tengamos las dos matrices se procede a hacer la suma de ambas
	suma_matriz(matrizUno,matrizDos,matrizResultado,F);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,F);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,F,F);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizResultado,F,F);

	return 0;
}
//La funcion leer_matriz nos ayuda a que el usuario pueda ingresar los datos de la matriz 
void leer_matriz(int datoUno[N][N], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++){
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&datoUno[i][j]);
		}}
}
//Nos permite imprimir cualquier matriz de la cual se ingresen los datos
void imprimir_matriz(int datoUno[N][N],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++){
		for (j = 0; j < C; j++)
		{
			printf("%d\t",datoUno[i][j]);
		}
		printf("\n");}
}
//Hace la suma de las matrices que el usuario ingresó implementando la función leer matriz
void suma_matriz(int datoUno[N][N],int datoDos[N][N],int matrizResultado[N][N],int F)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0; j < F; j++)
			matrizResultado[i][j]=datoUno[i][j]+datoDos[i][j];
}