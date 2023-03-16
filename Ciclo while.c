//Escribe un programa que lea dos numeros y muestre por pantalla todos los numeros 
//comprendidos entre esos numeros dados.

#include <stdio.h>

int main () {
	
	int x, y, i;
	
	printf ("Introduce un numero: \n");
	scanf ("%d", &x);
	printf ("Introduce un segundo numero: \n");
	scanf ("%d",&y);
	
	
	//como funciona el buble while: 
	//el while solo lleva una condicion y tenemos que definir desde antes la variable

	i = x + 1;
	while (i < y) {
		printf ("%d ", i);
		i++;
	}
	
	printf ("\n");
	//tenemos que poner una sentencia mas para que no quede en un buble infinito
	// para hacer eso damos la instruccion dentro del bucle
	
	system ("pause");
	return 0;
}
