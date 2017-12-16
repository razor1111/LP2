#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int const t = 5;
char nome[t][100];
char profissao[t][100];

void entrada(){
	for(int i = 0 ; i<t;i++){
	fflush(stdin);
		printf("Insira o seu nome: ");
		gets(nome[i]);
		printf("Insira a sua profissão: ");
		gets(profissao[i]);		
		system("cls");

		}
	}
	


void saida(){
	for(int i = 0 ; i<t;i++){
	printf("[ Nome: %s Profissão: %s ]\n",nome[i],profissao[i]);
	}
}





int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	entrada();
	saida();
	
	return 0;
}