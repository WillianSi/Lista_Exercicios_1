#include<stdio.h>

//Calcular o fatorial de um número informado.

int main()
{
	int i, n;
	
	printf("Digite o numero: ");
	scanf("%d",&n);
	
	for(i=1;n > 1;n=n-1){	
		i=i*n;
		
	}
	
	printf("\nresultado %d ",i);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
