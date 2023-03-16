//hacer un programa que avance de numeros par pero con buble while
int main () {
	int x, y, i;
	printf ("Bienvenido a la impresora de pares");
	printf ("Por favor escribe el numero del cual quieres partir \n");
	scanf ("%d", &x);
	printf ("Por favor escribe el ultimo número par al que quieres llegar \n");
	scanf ("%d", &y);
	
	if (x % 2==0) {
		i = x ;
		while (x<=y) {
			printf ("%d ", i);
			i++;
		}
		printf ("\n");
	}
	else {
		printf ("El numero escrito no es un numero par.");
		return 0;
	}
}
