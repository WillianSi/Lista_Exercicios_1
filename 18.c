#include<stdio.h>

//Escrever a tabuada de multiplicação do um número lido na tela.

int main()
{
	int i, n, resp;
	
	printf("Digite o numero: ");
	scanf("%d",&n);
	
	for(i=0;i<11;i++){	
		resp=n*i;
		printf("\n%d X %d = %d ",n,i,resp);
	}
	printf("\n");
	
	system("PAUSE");
	return 0;	
}
