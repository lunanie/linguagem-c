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


#include <stdio.h> //standart input output header
#include <math.h>
int main (void) {
	printf("Resultado: %d\n", 2*(5<9));
	return 0;
}

#include <stdio.h> //standart input output header
#include <math.h>
int main (void) {
	printf("Resultado: %d\n", 1==1==1);
	return 0;
}


#include <stdio.h> //standart input output header
#include <math.h>

int main (void) {
	printf("Resultado: %d\n", 5==5==5);
	return 0;
}



#include <stdio.h> //standart input output header
#include <math.h>

int main (void) {
	printf("Resultado: %d\n", 0< 5< 9);
	return 0;
}



#include <stdio.h> //standart input output header
#include <math.h>

int main (void) {
	int x = 5;
	printf("Resultado: %d\n", 0< x< 9);
	return 0;
}


#include <stdio.h> //standart input output header
#include <math.h>

int main (void) {
	int x = 51;
	printf("Resultado: %d\n", 0< x< 9);
	return 0;
}



#include <stdio.h>
int main(void) {
printf("%d\n",!0); // 1
printf("%d\n",!9); // 0
printf("%d\n",1&&0); // 0
printf("%d\n",0||1); // 1
printf("%d\n",2<3 || 3<2); // 1
return 0;
}


#include <stdio.h>
int main(void) {
printf("0 && 0 == %d\n",0 && 0);
printf("0 && 1 == %d\n",0 && 1);
printf("1 && 0 == %d\n",1 && 0);
printf("1 && 1 == %d\n",1 && 1);
return 0;
}








