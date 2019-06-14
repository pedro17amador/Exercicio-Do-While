#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int base,altura,area,triangulos,i;
	
	triangulos = 8;
	puts("\tAlgoritmo que calcula a área de 8 triângulo.");
	
	i = 1;
	do{
		printf("\n%dº Triângulo",i);
		puts("\nAtribua um valor para a base do triângulo: ");
		scanf("%d",&base);
		puts("Atribua o valor para altura do triângulo: ");
		scanf("%d",&altura);
	
		area = (base*altura)/2;
	
		printf("A área do triângulo é igual a: %d",area);
		i++;
	}while(i<=triangulos);
	
	return 0;
	
}  
