#include<stdio.h>

int main()
{
	int num=0,max=0,min=0,re;
	
	printf("Digite numeros e 0 para encerrar \n");
	scanf("%d",&num);
	
	while (num!= -1){
		scanf("%d",&num);
		
		if(num < -1)
			printf("Valor negativo %d\n",num);
		else if(num > 0){
			if(num > max){
				max=num;
			}
			else if(num < max)
				min=num;
		}
	}
	
	printf("O maior valor e: %d \n",max);
	printf("O menor valor e: %d \n",min);

	system("PAUSE");
	return 0;
}
