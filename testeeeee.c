#include <stdio.h> //standart input output header
#include <math.h>

int main (void) {
	float xp, yp, xq, yq;
	printf("Ponto P?");
	scanf("%f, %f", &xp, &yp);
	printf("Ponto Q?");
	scanf("%f, %f", &xq, &yq);
	float d = sqrt( pow(xq-xp,2) + pow(yq-yp,2) );
	printf ("Distancia: %.2f\n", d);
	return 0;
}
