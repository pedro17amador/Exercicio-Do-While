#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area,triangulos,i;
	
	triangulos = 8;
	puts("\tAlgoritmo que calcula a �rea de 8 tri�ngulo.");
	
	i = 1;
	do{
		printf("\n%d� Tri�ngulo",i);
		puts("\nAtribua um valor para a base do tri�ngulo: ");
		scanf("%d",&base);
		puts("Atribua o valor para altura do tri�ngulo: ");
		scanf("%d",&altura);
	
		area = (base*altura)/2;
	
		printf("A �rea do tri�ngulo � igual a: %d",area);
		i++;
	}while(i<=triangulos);
	
	return 0;
	
}  
