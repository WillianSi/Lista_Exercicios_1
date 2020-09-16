#include <stdio.h>

// Na usina de Angra II, os técnicos analisam a perda de massa de um material radioativo. 
// Sabendo-se que este perde 13% de sua massa a cada 20 segundos. Criar um programa em C 
// que receba a massa de um material em gramas, calcule iterativamente e mostre o tempo em 
// segundos necessário para que  a massa  deste material  se  torne menor  que  1,45  grama. 26
 
int main(){
	float massa;
	int seg=0;
	
	printf("Entre com a massa do material:");
	scanf("%f",&massa);
	while(massa>=1.45){
		massa -= massa*0.13;
		seg+=20;
		printf("Passado %d seg a massa e de %.2f\n",seg,massa);_sleep(500);
	}
	printf("\n!!!Foram necessarios %d seg para massa decair!!!\n",seg);

	system("PAUSE");
	return 0;
}
