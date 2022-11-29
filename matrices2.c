//Se incluyen librerias y se define una constante a utilizarse
#include <stdio.h>
#include <stdlib.h>
#define N 10
//Se pone la cabecera para que el main sepa de las funciones que se vayan a implementar y no haya conflicto
void leer_matriz(int datoUno[N][N], int F, int C);
void imprimir_matriz(int datoUno[N][N],int F,int C);
void multiplicar(int datoUno[N][N],int datoDos[N][N],int resultadoM[N][N],int f1,int cf,int c2);
//se declara el main
int main(int argc, char *argv[]) {
	//se declaran las variables enteras y de topo matriz a utilizarse
	int F,C,L,P, i,j;
	int matrizUno[N][N],matrizDos[N][N];
	int matrizresultadoMsultado[N][N];
	int dato;
	//se solicita al usuario que tipo de operacion va a realizar
	printf("Ingrese 1 si desea una matriz NxM o ingrese 2 para una matriz NxN\n");
	scanf("%d",&dato);
	//se inicia el Switch-case
	switch(dato)
	{
	case 1:
		//En esta funcion vemos una multiplicacion de tipo (NxM)x(MxP)
		printf("Primer matriz\n");
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);
	leer_matriz(matrizUno,F,C);
	printf("Segunda matriz\n");
	printf("Para que la multiplicaciónse efectúe, las filas de la segunda matriz deben de ser igual a las columnas de la primera\n");
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&P);
	leer_matriz(matrizDos,C,P);
	multiplicar(matrizUno,matrizDos,matrizresultadoMsultado,F,C,P);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,C,P);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizresultadoMsultado,F,P);
		break;
	case 2:
		//En esta funcion vemos una multiplicación de tipo (NxM)x(NxM)
		printf("Primer matriz\n");
	printf("Ingrese el orden de las matrices\n");
	scanf("%d",&F);
	leer_matriz(matrizUno,F,F);
	printf("Segunda matriz\n");
	leer_matriz(matrizDos,F,F);
	multiplicar(matrizUno,matrizDos,matrizresultadoMsultado,F,F,F);
	printf("La matriz uno es:\n");
	imprimir_matriz(matrizUno,F,F);
	printf("La matriz dos es: \n");
	imprimir_matriz(matrizDos,F,F);
	printf("Matriz resultado\n");
	imprimir_matriz(matrizresultadoMsultado,F,F);
		break;
	default:
		printf("Dato no valido\n");
		break;
	}
	
	return 0;
}
//La funcion leer_matriz nos ayuda a que el usuario pueda ingresar los datos de la matriz 
void leer_matriz(int datoUno[N][N], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&datoUno[i][j]);
			//fflush(stdin);
		}
}
//Nos permite imprimir cualquier matriz de la cual se ingresen los datos
void imprimir_matriz(int datoUno[N][N],int F,int C)
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
//Hace la multiplicación de las matrices que el usuario ingresó implementando la función leer matriz
void multiplicar(int datoUno[N][N],int datoDos[N][N],int resultadoM[N][N],int f1,int cf,int c2)
{
	int i,j,k;
	//Limpiar matriz para que al momento de hacer la operación no tenga basura que pueda interferir
	for(i=0;i<f1;i++)
		for (j = 0; j < c2; j++)
			resultadoM[i][j]=0;

	//Se hace la multiplicación de la matriz
	for(i=0;i<f1;i++)
		for (j = 0; j<cf; j++)
			for (k = 0; k < c2; k++)
					resultadoM[i][k]= resultadoM[i][k]+datoUno[i][j]*datoDos[j][k];
}

