#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int medidas,i;
	float medida,r1,r2,r3;

	puts("\tPrograma para apresentar medidas.\n");
	medidas = 10;
	
	i = 1;
	do{
		printf("%d° Medida:",i);
		puts("\nDigite um valor em centimetros:");
		scanf("%f",&medida);
		
		r1 = medida/100;
		r2 = medida/10;
		r3 = medida/0.1000; 
		
		printf("O valor dessa medida em metros é: %.2f",r1);
		printf("\nO valor dessa medida em decímetros é: %.2f",r2);
		printf("\nO valor dessa medida em milimetros é: %.2f\n\n",r3);
		i++;
	}while(i<=medidas);
	
	return 0;
}



