#include <stdio.h>

	int main (){
		double a, b, c;
		
		scanf("%lf, %lf, %lf", &a, &b, &c);

		printf("Tringulo: %.3lf\n", (a*c) /2);
		printf("Circulo: %.3lf\n", c * c * 3.14159);
		printf ("Trapezio: %.3lf\n", ((a+b) /2) * c);
		printf("Quadrado: %.3lf\n", b * b);
		printf("Retangulo: %.3lf\n", a * b);

	return 0;
	}
