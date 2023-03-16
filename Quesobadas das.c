//cantidades y precio en los quesos
#include <stdio.h>

int main () {
	int queso;
	int cant, total;
	printf ("Bienvenido a la tiendita los alusines \n");
	printf ("Este es el precio del queso \n");
	printf ("1- Queso Oaxaca 20$ \n");
	printf ("2- Queso Badota 60$ \n");
	printf ("Elige una de esas 2 opciones \n");
	
	// ahora tenemos que dar preciosos y registrar cantidades
	printf ("De cual queso te gustaria? \n");
	scanf ("%d", &queso);
	if (queso==1) {
		printf ("Cuantos quesos quieres? \n");
		scanf ("%d", &cant);
		total= cant * 20;
		printf ("El total es %d :", total );
		printf ("\n Gracias por venir. :D");
	}
	if  (queso==2) {
		printf ("Cuantos quesos quieres? \n");
		scanf ("%d", &cant);
		total= cant * 60;
		printf ("El total es %d :", total );
		printf ("\n Gracias por venir. :D");
	}
}
