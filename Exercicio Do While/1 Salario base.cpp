#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dependentes,i,funcionario;
	float vl,vb,vh,ht;
	
	funcionario = 10;

	puts("\tAlgoritmo que calcula o salário base de 10 funcionários.");
	
	i = 1;
	do{
		printf("\n%dº Funcioário\n",i);
		puts("Número de dependentes:");
		scanf("%d",&dependentes);
		puts("Valor da hora:");
		scanf("%f",&vh);
		puts("Digite a quantidade de horas trabalhadas:");
		scanf("%f",&ht);
		
		vb = vh*ht;
		vl = (300*dependentes)+vb;
		
		printf("Valor Bruto: %f\nValor Liquido: %f\n",vb,vl);
		i++;
	}while(i<=funcionario);

	return 0;
	
}  


