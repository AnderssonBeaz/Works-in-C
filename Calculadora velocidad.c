// programar un problema que diga la velocidad a la que se mueve un auto
#include <stdio.h>

int main () {
	int dis, tiem, vel; 
	
	printf ("Bienvenido a tu calculadora de velocidad \n");
	printf ("Por favor dime cual es tu distancia en metros? \n");
	scanf ("%d", &dis);
	printf ("Por favor dame el tiempo de llega en segundos \n");
	scanf ("%d", &tiem);
	
	vel= dis / tiem;
	
	printf ("La velocidad es: %d" ,vel);
	printf ("M/S");
	
}
