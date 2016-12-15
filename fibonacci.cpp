#include <stdio.h>
int main(){
	int c, n, t=1, t2=1, d=0;
	printf("Serie Fibonacci");
	printf("\n\nIngrese un numero: ");
	scanf("%d", &n);
	printf("La serie es:\n %d,%d,%d",d,t,t2);
	c=3;
	while (c<n){
		d=t+t2;
		t=t2;
		t2=d;
		printf(",%d",d);
		c++;
	}
	return 0;
}
