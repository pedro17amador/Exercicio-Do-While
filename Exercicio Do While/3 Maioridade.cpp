#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano,resultado,i,pessoas;
	
	pessoas = 15;
	
	puts("\tAlgoritmo que verifica as idades.\n");
	i=1;
	do{
		printf("%dº Pessoa\n",i);		
		puts("Digite seu ano de nascimento:\n");
		scanf("%d",&ano);
		
		resultado = 2019-ano;
		
		if(resultado >= 18){
			puts("Atingiu a maioridade penal.\n\n");
		}
		else{
			puts("Ainda não atingiu a maioridade penal.\n\n");
		}
		i++;
	}while(i<=pessoas);
	
	system("PAUSE");
	return 0;
}
