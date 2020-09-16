#include<stdio.h>

//Faça um programa em C para efetuar a conversão de um valor dado em Mbps para Kbps. 

int main()
{
	float mbPs, resul;
	
	printf("valor dado em Mbps: ");
	scanf("%f",&mbPs);
	
	resul = mbPs * 1000;
	
	printf("\nA conversão do valor dado em Mbps para Kbps e: %.2f",resul);
	
	system("PAUSE");
	return 0;	
}
