#include<stdio.h>
#include<string.h>

//A OBI (Organização de Bocha Internacional) é responsável por organizar a competição mundial de bocha. 
//Infelizmente esse esporte não é muito popular, e numa tentativa de aumentar a sua popularidade, ficou 
//decidido que seriam chamados, para a Grande Final Mundial, o campeão e o vice-campeão de cada sede nacional, 
//ao invés de apenas o primeiro lugar. Tumbólia é um país pequeno que já havia realizado a sua competição 
//nacional quando a nova regra foi instituída, e o comitê local não armazenou quem foi o segundo classificado. 
//Felizmente eles armazenaram a pontuação de todos competidores - que foram apenas três, devido ao tamanho diminuto do país. 
//Sabe-se também que as pontuações de todos jogadores foram diferentes, de forma que não ocorreu empate entre nenhum deles. 
//Resta agora descobrir quem foi o vice-campeão e para isso o comitê precisa de ajuda. 

int main()
{
	int i, com1, com2, com3;
	
	printf("Digite o numero de pontos: ");
	scanf("\n%d %d %d",&com1,&com2,&com3);
	
	if(com1 > com2 && com1 < com3 || com1 < com2 && com1 > com3)
	printf("\n%d",com1);
	
	else if(com2 > com1 && com2 < com3 || com2 < com1 && com2 > com3)
	printf("\n%d",com2);
	
	else if(com3 > com1 && com3 < com2 || com3 < com1 && com3 > com2)
	printf("\n%d",com3);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
