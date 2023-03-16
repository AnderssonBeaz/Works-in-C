//programar un login
#include <stdio.h>
int main () {
	char user [10];
	char pasword [7];
	int x;
	
	printf ("\t\t\t\t ------------CHAFABOOK-----------\n");
	printf ("\t\t\t\t Bienvenido a Chafabook\n");
	printf ("\t\t\t\t Si ya tienes una cuenta escribe 1: \n");
	printf ("\t\t\t\t Si quieres crear una cuenta escribe 2: \n");
	scanf ("%d",&x);
	
	switch (x) {
		case 1: printf ("\t\t\t Por favor escribe tu nombre de usuario\n");
		 scanf ("%s",user);
		 printf ("\t\t\t Por favor escribe tu pasword\n");
		 scanf ("%s",pasword);
		 if ((user, "Ander") && (pasword, "Ander19")) 
		 {
		 	printf ("\t\t\t\t Bienvenido de nuevo a CHAFABOOK %s",user);
		 }
		 else {
		 	printf ("\t\t\t Usuario o pin incorrecto \n");
		 }	
			break;
		case 2:
		 printf ("\t\t\t Cual quieres que sea tu nombre de usuario? \n");
		 scanf ("%s",user);
		 printf ("\t\t\t Por favor elige tu pin de seguridad maximo 7 caracteres \n");
		 scanf ("%s",pasword);
		 printf ("\t\t\t\t Bienvenido a CHAFABOOK %s", user);
		 break;
		default: break;
		
	}
	return 0;

	
}
