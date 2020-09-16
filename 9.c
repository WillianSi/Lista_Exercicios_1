#include<stdio.h>

//Efetuar o cálculo da quantidade de litros de combustível 
//gastos em uma viagem, utilizando-se um automóvel que faz 
//N Km por litro. Para obter o cálculo, o usuário deverá 
//fornecer o tempo gasto e a velocidade média da viagem. 
//Desta forma, será possível obter a distância percorrida 
//com a fórmula DISTANCIA ? TEMPO * VELOCIDADE. Tendo o 
//valor da distancia, basta calcular a quantidade de litros 
//de combustível utilizada na viagem com a fórmula: 
//LITROS_USADOS DISTANCIA /N. 
//O programa em C deverá apresentar os valores da distância 
//percorrida e a quantidade de litros utilizados na viagem. 

int main()
{
	float n, distancia, tempo, velocidade, litros_usados;
	
	printf("Km por litro: ");
	scanf("%f",&n);
	
	printf("\nTempo de viagem: ");
	scanf("%f",&tempo);
	
	printf("\nVelocidade: ");
	scanf("%f",&velocidade);
	
	distancia=tempo*velocidade;
	litros_usados=velocidade/n;
	
	printf("\nDistancia percorida: %.2f Km",distancia);
	printf("\nQantidade de litros usados: %.2f L",litros_usados);
	
	system("PAUSE");
	return 0;
}
