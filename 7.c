#include<stdio.h>

//Um reality show realizou uma prova onde os participantes 
//tinham que buscas bolas de 3 cores diferentes, e de acordo 
//com a tabela abaixo cada um teria uma pontuação: 
//Bola Verde: 10 pontos Bola amarela: 5 pontos Bola branca: 3 pontos
int main()
{
	int v, a, b, final;
	printf("Bolas verdes: ");
	scanf("%d",&v);
	
	printf("\nbolas amarelas: ");
	scanf("%d",&a);
	
	printf("\nbolas brancas: ");
	scanf("%d",&b);
	
	final=(v*10)+(a*5)+(b*3);
	
	printf("\nA pontuacao final foi: %d",final);
	
	system("PAUSE");
	return 0;
}
