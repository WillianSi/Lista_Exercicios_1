#include<stdio.h>

//Elaborar um programa em C que apresente o valor da conversão 
//em dólar (US$) de um valor lido em real, o programa deve 
//solicitar a cotação do dólar e também a quantidade de reais 
//disponível com o usuário.
int main()
{
	float re, dol, resul;
	printf("cotacao do dolar: ");
	scanf("%f",&dol);
	
	printf("\nDigiteo valor em real a ser comvertido: ");
	scanf("%f",&re);
	
	resul = re * dol;
	
	printf("\nO seu valor em reais e: %.2f",resul);
	
	system("PAUSE");
	return 0;		
}
