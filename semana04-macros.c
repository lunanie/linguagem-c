// ILP-010 (Prof. Dr. Silvio do Lago Pereira)

//------------------------------------------------------------
// Exemplo 1 
//------------------------------------------------------------

#include <stdio.h>

#define PI 3.14

int main(void) {
   printf("PI = %.4f\n",PI);   // PI = 3.1400
   return 0;
}

//------------------------------------------------------------
// Exerc�cio 1 
//------------------------------------------------------------

#include <stdio.h>

programa
inicio
   diga("Oi!");
fim

//------------------------------------------------------------
// Exerc�cio 2 
//------------------------------------------------------------

#include <stdio.h>

int main(void) {
   printf("Inteiro minimo = %+d\n",MIN_INT);
   printf("Inteiro maximo = %+d\n",MAX_INT);
   return 0;
}

//------------------------------------------------------------
// Exemplo 2 
//------------------------------------------------------------

#include <stdio.h>

#define par(n) ((n)%2==0)

int main(void) {
   int a;
   printf("Numero? ");
   scanf("%d",&a);
   puts(par(a) ? "Par" :  "Impar");
   return 0;
}

//------------------------------------------------------------
// Exemplo 3 
//------------------------------------------------------------

#include <stdio.h>

#define quadrado(n) n*n

int main(void) {
   printf("%d\n",quadrado(2)); // 4 (certo!)
   return 0;
}

//------------------------------------------------------------
// Exerc�cio 3 
//------------------------------------------------------------

#include <stdio.h>

#define maiuscula(c) ... // complete essa defini��o!

int main(void) {
   char x;
   printf("Caractere? ");
   scanf("%c",&x);
   printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
   return 0;
}

//------------------------------------------------------------
// Exerc�cio 4 
//------------------------------------------------------------

#include <stdio.h>
#include "portugues.h"

programa
inicio
   diga("Oi!");
fim

//------------------------------------------------------------
// Exemplo 9
//------------------------------------------------------------

#include <stdio.h>

void g(void) { puts("G"); }

void f(void) { puts("F1"); g(); puts("F2"); }

int main(void) { puts("M1"); f(); puts("M2"); return 0; }

//------------------------------------------------------------
// Exemplo 10
//------------------------------------------------------------

#include <stdio.h>

void f(void); // declara��o de f()
void g(void); // declara��o de g()

int main(void) { puts("M1"); f(); puts("M2"); return 0; }

void f(void) { puts("F1"); g(); puts("F2"); }

void g(void) { puts("G"); }

//------------------------------------------------------------
// Exemplo 13
//------------------------------------------------------------

#include <stdio.h>

double potencia(double x,unsigned int n) {
   double p = 1;
   for(unsigned int i=1; i<=n; i++) p *= x;
   return p;    
}

int main(void) {
   printf("%.1f\n",potencia(2,5));  // 32.0
   return 0;
}

//------------------------------------------------------------
// Exemplo 14
//------------------------------------------------------------

#include <stdio.h>

float media(float a, float b) { return (a+b)/2; }

float maior(float a, float b) { return (a>b) ? a : b; }

int main(void) {
   float p1, p2, t1, t2;
   printf("Provas? ");
   scanf("%f %f",&p1,&p2);
   printf("Trabalhos? ");
   scanf("%f %f",&t1,&t2);
   printf("Media = %.1f\n",media(maior(p1,p2),maior(t1,t2)));
   return 0;
}

//------------------------------------------------------------
// Exemplo 15
//------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <time.h>

void sequencia(void) {
  auto int n=0;  
  printf("%d,",n++);
}

int main(void) {
   while( !_kbhit() ) {
      sequencia();
      _sleep(1);
   }
   return 0;
}

//------------------------------------------------------------
// Exemplo 16
//------------------------------------------------------------

#include <stdio.h>
#include <conio.h>
#include <time.h>

int npa(void) {
   static unsigned s=1234;
   auto unsigned n=s%100;
   s += s/10;
   return n;
}

int main(void) {
   while( !_kbhit() ) {
      printf("%d\n",npa()); 
      _sleep(1);
   }
   return 0;
}



//anotações de aula
#include <stdio.h>

#define programa int main(void)
#define inicio {
#define diga puts
#define fim return 0; }

programa
inicio
   diga("Oi!");
fim

//portugues.h 
#define programa int main(void)
#define inicio {
#define diga puts
#define fim return 0; }


//programa.c
#include <stdio.h>

#include "portugues.h"

programa
inicio
   diga("Oi!");
fim

//maior inteiro em linguagem c 0x7FFFFFFF


#include <stdio.h>
#define MAX_INT 0x7FFFFFFF
#define MIN_INT MAX_INT+1


int main(void) {
   printf("Inteiro minimo = %+d\n",MIN_INT);
   printf("Inteiro maximo = %+d\n",MAX_INT);
   return 0;
}




//OVERFLOW... QUANDO É O MAXIMO MAIS UM



#include <stdio.h>
#define MAX_INT 0x7FFFFFFF
#define MIN_INT 0x80000000


int main(void) {
   printf("Inteiro minimo = %+d\n",MIN_INT);
   printf("Inteiro maximo = %+d\n",MAX_INT);
   return 0;
}



//#define substitui variavel no arquivo todo, é global

//colocar todos os parenteses possiveis na definicao da macro




#include <stdio.h>
#define maiuscula(c)((c)>= 'A' && (c)<= 'Z')


int main(void) {
   char x;
   printf("Caractere? ");
   scanf("%c",&x);
   printf("Maiuscula: %s\n",maiuscula(x) ? "sim" : "nao");
   return 0;
}



#include <stdio.h>
#include <ctype.h>




int main(void) {
   char x;
   printf("Caractere? ");
   scanf("%c",&x);
   printf("Maiuscula: %s\n",isupper(x) ? "sim" : "nao");
   return 0;
}
//unsigned - nao sinalizado se positivo ou negativo
// quando coloco return já sai da função e nao precisa escrever o else





#include <stdio.h>
#include <math.h>

double raiz(double x) {
	double r = x/2;
	while( fabs(r*r-x) >= 0.0001)
		r= (r*r+x)/(2*r);
	return r;

}


int main(void) {
	printf("Raiz = %.3f\n", raiz(9));
	return 0;
}




#include <stdio.h>
#include <math.h>

double raiz(double x) {
	double r = x/2;
	while( fabs(r*r-x) >= 0.001){
		printf("%f\n", r);
		r= (r*r+x)/(2*r);
	}
	return r;
}

int main(void) {
	printf("Raiz = %.3f\n", raiz(81));
	return 0;
}





