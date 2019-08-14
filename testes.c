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


//operadores lógicos
#include <stdio.h>
int main(void) {
	printf("%d\n",!0); // 1
	printf("%d\n",!9); // 0
	printf("%d\n",1&&0); // 0
	printf("%d\n",0||1); // 1
	printf("%d\n",2<3 || 3<2); // 1
	return 0;
}

//&& 
#include <stdio.h>
int main(void) {
	printf("0 && 0 == %d\n",0 && 0);
	printf("0 && 1 == %d\n",0 && 1);
	printf("1 && 0 == %d\n",1 && 0);
	printf("1 && 1 == %d\n",1 && 1);
	return 0;
}


//falso
#include <stdio.h> //standart input output header
#include <math.h>
int main (void) {
	int x = 51;
	printf("Resultado: %d\n", 0< x && x< 9);
	return 0;
}


//verdade
#include <stdio.h> //standart input output header
#include <math.h>
int main (void) {
	int x = 5;
	printf("Resultado: %d\n", 0< x && x< 9);
	return 0;
}


#include <stdio.h>

int main(void) {
	int idade;
	printf("Idade? ");
	scanf("%d",&idade);
	if( idade<=18 ) puts("Menor");
	else puts("Maior");
	return 0;
}

#include <stdio.h>
int main(void) {
	printf("teste? ");
}

//puts só funciona com string
//se colocar \n pula duas linhas
#include <stdio.h>
int main(void) {
	puts("teste? ");
}

#include <stdio.h>
int main(void) {
	printf("teste? \n");
}

#include <stdio.h>
int main(void) {
	int x = 2;

	if( x = 1) puts("a");
	else puts("b");
	return 0;
}

#include <stdio.h>
int main(void) {
	int x = 2;
	printf("Antes: %d\n", x);
	if( x = 0) puts("a");
	else puts("b");
	printf("Depois: %d\n", x);
	return 0;
}



#include <stdio.h>
int main(void) {
	int x, y, z;
	x = y = z = 5;
	printf("%d %d %d\n", x, y, z);
	return 0;
}



#include <stdio.h>
int main(void) {
	int x, y, z;
	x =(y = 2 * (z = 5) +1) +3;
	printf("%d %d %d\n", x, y, z);
	return 0;
}

#include <stdio.h>
int main(void) {
	float p1, p2, m;
	printf("Notas? ");
	scanf("%f %f",&p1,&p2);
	m = (p1+p2)/2;
	if( m>=6 ) puts("Aprovado");
	else puts("Reprovado");
	return 0;
}

#include <stdio.h>
int main(void) {
	int n1, n2;
	printf("Números? ");
	scanf("%d %d",&n1,&n2);

	if( n1>n2 ) printf("%d\n", n1);
	else printf("%d\n", n2);
	return 0;
}

//qual é o maior de 2
#include <stdio.h>
int main(void) {
	int n1, n2;
	printf("Numeros? ");
	scanf("%d %d",&n1,&n2);

	if( n1>n2 ) printf(" %d eh maior\n", n1);
	else printf("%d eh maior\n", n2);
	return 0;
}

// qual é o maior de 3
#include <stdio.h>
int main(void) {
	int n1, n2, n3;
	printf("Numeros? ");
	scanf("%d %d %d",&n1,&n2, &n3);
	if( n1>n2 && n1>n3 ) printf(" %d eh maior\n", n1);
	else if(n2>n3) printf("%d eh maior\n", n2);
	else printf("%d eh maior\n", n3);
	return 0;
}



#include <stdio.h>
int main(void) {
	int a, b, c;
	printf("Numeros? ");
	scanf("%d %d %d",&a,&b, &c);
	int m = a;
	if( b>m) m = b;
	if (c>m) m = c;
	printf(" %d eh maior\n", m);
	return 0;
}

//uma coisa só
if (a>1) x = 7;
else if (b>2) x = 9;


//duas coisas (tem que por chaves)
if (a>1) x = 7;
if (b>2) x = 9;

int main(void) {
	int a, b;
	printf("Numeros? ");
	scanf("%d %d",&a,&b);
	printf("Maior = %d\n",(a>b ? a : b));
	return 0;
}








