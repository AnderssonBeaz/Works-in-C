//hacer un programa que imprima los numeros pares del 1 al 100
#include <stdio.h>
int main () {
	int x, y, i;
	
	printf ("Bienvenido a la impresora de los pares \n");
	printf ("Por favor escribe un numero para partir de ese numero \n");
	scanf ("%d", &x);
	printf ("Escribe el numero par al que quieres llegar \n");
	scanf ("%d", &y);
	
	if (x % 2==0) {
		for (i = x  ; i <= y ; i+=2 ) {
		printf ("%d ", i);
	}
	}
	else {
		printf ("El numero no es par.");
		return 0;
	}
	
	
}
