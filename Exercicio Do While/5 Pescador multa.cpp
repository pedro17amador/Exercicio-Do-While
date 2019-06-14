#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float multa,qpescado;
	int i,pescadores;
	
	puts("\tAlgoritmo que calcula multa do pescador.\n");
	pescadores = 5;
	i = 1;
	do{
		printf("%d° Pescador:\n",i);
		puts("Quantidade em quilos de peixe pescado:");
		scanf("%f",&qpescado);
		
		multa = (qpescado-50)*4;
		
		if(qpescado > 50){
			printf("Valor da multa: R$%.2f\n\n",multa);
		}
		else{
			printf("Quantidade de quilos de peixe permitido.\n\n");
		}
		i++;
	}while(i<=pescadores);
	
	system("PAUSE");
	return 0;
}
