#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int const t = 2;
int const av = 2;
char nomes[t][100];
float medias[av];
float parciais[av];

void entrada(){
	float soma = 0 ;
	int k = 0 ;
	float media = 0 ;
	for(int i = 0 ; i<t;i++){
		soma = 0,media = 0 ;
		fflush(stdin);
		printf("Insira o seu nome: ");
		gets(nomes[i]);
		for(int j = 0 ; j<av;j++){
			printf("Insira a nota da PR%d: ",j+1);
			scanf("%f",&parciais[j]);			
			soma = soma + parciais[j];
		}
		media = (soma/av);
		medias[k] = media;
		k++;
		system("cls");			
	}
	
	
}


void saida(){
	for(int i = 0 ; i<t;i++){
		printf("{Nome: %s Média : %.2f}\n",nomes[i],medias[i]);
	}
	
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	entrada();
	saida();
	
	return 0;
}