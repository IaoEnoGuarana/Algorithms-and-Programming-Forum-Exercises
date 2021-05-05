/* Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara. Se n�o for poss�vel calcular
 as ra�zes, mostre a mensagem correspondente �Impossivel calcular�, caso haja uma divis�o por 0 ou raiz de numero negativo.

Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.

Sa�da
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular".
 Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem correspondente conforme 
 exemplo abaixo.
  Imprima sempre o final de linha ap�s cada mensagem.
  */

#include <stdio.h>//Puxando biblioteca de entrada e de sa�da.
#include <math.h>//Puxando biblioteca de c�lculos matem�ticos.
int main(){//In�cio do algor�tmo.
	double a, b, c, x1, x2, delta; //Declara��o de vari�veis reais em long float.
	
	printf ("Digite o valor de a, b e c sequencialmente: \n"); //Pedindo dados de entrada.
	scanf ("%lf""%lf""%lf", &a, &b, &c);//Lendo dados de entrada.
	
	delta = pow(b,2)-4*a*c;
	
	if (a == 0 or delta < 0){ //Condicional if{}
	
	printf ("Impossivel calcular!\n");
	}
	else {
		x1 = (-(b) + sqrt(delta))/ (2*a);
		x2 = (-(b) - sqrt(delta))/ (2*a);
		printf ("X'= %.2lf\tX''= %.2lf\n", x1, x2);//Mostrando dados de sa�da
	}
	
	
	
	return 0;
}
