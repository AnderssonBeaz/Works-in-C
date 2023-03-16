//vamos a hacer un acomodo de menor a mayor o biseversa 
#include <stdio.h>

int main () {
    int num1, num2, num3;
    int opc;

    printf ("\t\t\t\t--------ACOMODADOR AUTOMATICO-------- \n");
    printf ("\t\t\t\t Bienvenido al acomodador automatico \n");
    printf ("\t\t\tIngrese tres numeros y separalos con la tecla espacio \n");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);
    printf ("\t\t\t Por favor elige el orden que deseas tener \n");
    printf ("\t\t\t Para acomodar de Menor a Mayor Escribe 1 \n");
    printf ("\t\t\t Para acomodar de Mayor a Menor Escribe 2 \n");
    scanf ("%d",&opc);



    switch (opc) {
        case 1: printf ("\t\t\t\t El acomodo es: \n");
        if (num1<num2 && num1<num3) {
        	if (num2<num3) {
        		printf ("\t\t\t\t %d\n",num1);
        		printf ("\t\t\t\t %d\n",num2);
        		printf ("\t\t\t\t %d\n",num3);
			}
			else {
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num2);
			}
		}
		if (num2<num1 && num2<num3)
		{
			if (num1<num3) 
			{
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num3);
			}
			else 
			{
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num1);
			}
		}
		if (num3<num1 && num3<num2)
		{
			if (num1<num2)
			{
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num2);
			}
			else
			{
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num1);
			}
		}
		break;
        
        case 2:printf ("\t\t\t\t El acomodo es: \n");
        if (num1<num2 && num1<num3) {
        	if (num2<num3) {
        		printf ("\t\t\t\t %d\n",num3);
        		printf ("\t\t\t\t %d\n",num2);
        		printf ("\t\t\t\t %d\n",num1);
			}
			else {
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num1);
			}
		}
		if (num2<num1 && num2<num3)
		{
			if (num1<num3) 
			{
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num2);
			}
			else 
			{
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num3);
				printf ("\t\t\t\t %d\n",num2);
			}
		}
		if (num3<num1 && num3<num2)
		{
			if (num1<num2)
			{
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num3);
			}
			else
			{
				printf ("\t\t\t\t %d\n",num1);
				printf ("\t\t\t\t %d\n",num2);
				printf ("\t\t\t\t %d\n",num3);
			}
		}
        	
		 break;
        default: printf ("Opcion invalida");
		 break;

    }

}

