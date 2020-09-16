#include<stdio.h>

int main()
{
	int n, p, x, y, din, i, j, soma=0, cont=0;
	
	while(n <= 1 || n >= 100 || p <= 1 || p >= 1000){
		printf("Digite o numero de competidores: ");
		scanf("%d",&n);
		
		printf("Digite o numero de pontos necessarios: ");
		scanf("%d",&p);
	}
	while(x <= 0 || x >= 400 || y <= 0 || y >= 400){
		for(i=0;i<n;i++){
			
				printf("Dia [%d] = ",i);
				scanf("%d",&x);
				
				printf("Dia [%d] = ",i);
				scanf("%d",&y);
				
				soma = x + y;
				
				if(soma >= p){
					cont++;
				}
			
			}	
	}
	
	printf("Numero de competidores que serao convidados sao: %d\n",cont);	
	
	system("PAUSE");
	return 0;
}

