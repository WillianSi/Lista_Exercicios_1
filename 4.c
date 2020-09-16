#include<stdio.h>

//Faça um programa para calcular a área de um cilindro dada sua formula. 
int main()
{
	float a, r, h, pi=3.14;
	
	printf("Digite o numero do raio: ");
	scanf("%f",&r);
	
	printf("Digite o numero da altura: ");
	scanf("%f",&h);
	
	a=2*pi*r*(r+h);
	
	printf("\nResultado: %.2f",a);
	
	system("PAUSE");
	return 0;
}
