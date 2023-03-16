//Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros 
//comprendidos entre esos numeros dados.

#include <stdio.h>

int main () {
	
	int x, y, i, j;
	
	printf ("Introduce un numero: \n");
	scanf ("%d", &x);
	printf ("Introduce un segundo numero: \n");
	scanf ("%d",&y);
	
	//bucle for
	
	//para utilizar los bubles se necesita contadores que por lo general se llaman "i" o "j"
	
	for (i = x + 1 ; i < y ; i++) {
		printf ("%d ", i);
	}
	
	printf ("\n");
	

	
	system ("pause");
	return 0;
}
