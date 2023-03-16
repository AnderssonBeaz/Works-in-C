// crear un programa que unifique lo aprendido 
#include <stdio.h>

int main () {
	int x, y, z;
	char tipo [6];
	
	printf ("\t\t\t POKEDEX \n\n");
	printf ("Bienvenido a la pokedex\n");
	
	printf ("Que te gustaria ver? \n");
	printf ("1: Pokedex de tus Pokemones \n");
	printf ("2: Tipos de pokemones\n");
	printf ("3: Tabla de debilidades en tipos mas comun\n");
	scanf ("%d", &x);
	
	switch (x){
		case 1: 
		printf ("Esta es tu pokedex, de que tipo te gustaria ver? \n");
		printf ("1: Planta \n");
		printf ("2: Fuego \n");
		printf ("3: Agua \n");
		scanf ("%d", &y);
		
		switch (y) {
			case 1: printf ("Tus pokemones tipo Planta son: \n");
			printf ("1: Bulbasaur\n");
			printf ("1: Leafleon\n");
			printf ("1: Chespin\n");
			break;
			
			case 2:printf ("Tus pokemones tipo Fuego son: \n");
			printf ("1: Charmander\n");
			printf ("1: Chimchar\n");
			printf ("1: Slugma\n");
			break;
			
			case 3:printf ("Tus pokemones tipo Agua son: \n");
			printf ("1: Squartle \n");
			printf ("1: Froaki \n");
			printf ("1: piplup \n");
			break;
			
			default: printf ("La opcion no es valida.");
		}
		case 2: printf ("Los tipos de pokemon son: \n");
		printf ("Planta \n");
		printf ("Fuego \n");
		printf ("Agua \n");
		break;
		
		case 3: printf ("Por favor escribe el tipo de tu pokemon \n");
		printf ("En este caso solo hay 3 tipos, 1:Planta, 2:Agua, 3:Fuego \n");
		printf ("Por favor escribe el numero del tipo. \n");
		scanf ("%d", &tipo);
		
		if (z == 1) {
			printf ("Tu pokemon es debil contra los tipo fuego \n");
			printf ("Pero es fuerte contra el tipo agua");
			break;
			
		if (z == 2) {
			printf ("Tu pokemon es debil contra los tipo Planta \n");
			printf ("Pero es fuerte contra el tipo Fuego");
			break;
		}
		
		if (z == 3) {
			printf ("Tu pokemon es debil contra los tipo Agua \n");
			printf ("Pero es fuerte contra el tipo Planta");
			break;
		}
			break;
		}
	}
    return 0;
}
