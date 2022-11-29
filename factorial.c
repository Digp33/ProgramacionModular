#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int nFac;
	int reFac=1;
	int i;
	printf("Ingrese el numero del cual quiere el factorial\n");
	scanf("%d",&nFac);
	if(nFac==0)
		printf("\nEl factorial es 1");
	else if(nFac<0)
			printf("\nEste programa no da el factorial de numeros negativos\n");
		else
		{
			for ( i = 1; i <= nFac; i++)
				reFac=reFac*i;
			printf("\nEl Valor del factorial de %d es: %d\n",nFac,reFac );
		}
	
	return 0;
}