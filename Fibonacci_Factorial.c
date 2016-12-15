#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int op,num,fib,nant,aux,ban,c,fa;
	ban=1;
	printf (" Serie Fibonacci \n");
	printf ("Ingrese numero para detener serie fibonacci: ");
	scanf ("%i", &num);
	fib=1;
	nant =0;
	if (num>1) {
		printf ("O,1");
		while (ban==1) {									
		
			aux=fib;
			fib= nant+fib;
			nant=aux;
			if (fib<num){
				printf (",%i", fib);
			}		
			else {
				ban=0;
			}
		}
	}
	else {
			
		if (num==1)	{
			printf ("%i",nant);
		}	
		else {
		 	printf ("Numeros menores de 1 no son validos \n");	
		}
	}			     	
	return 0;
}
