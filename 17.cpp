#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int const tam = 50;
int vet[50];
void geraAleatorio(){
	 int i;
	 srand(time(NULL));
     for (i = 0; i < tam; i++)
     {
     		vet[i] = (rand()%7);
     	
     }
     
 
}

void lancamentos(){
	float soma = 0 ;
	float media = 0 ;
	for(int i = 0 ; i < tam ; i++){
		soma = soma + vet[i];
	}
	media = (soma/tam);
	
	printf("A Media dos Lancamentos:%.2f ",media);
	printf("\n\n");
	printf("Lancamentos maiores que a media:\n");
	for(int i = 0 ; i < tam ; i++){
		if(vet[i]>media){
			printf("{ %d }",vet[i]);
			printf("\n");

		}
	}
	
	
	
}

void face6(){
	int ocorrencias = 0;
	for(int i = 0 ; i < tam ; i++){
		if(vet[i] == 6){
			ocorrencias++;
		}
	}
	ocorrencias = (ocorrencias*100)/tam;
	printf("\n\n");
	printf("A percentagens de ocorrencias da face 6:%d%%",ocorrencias);
	
}


int main(int argc, char** argv)
{
	geraAleatorio();
	lancamentos();
	face6();
	getch();
	
	
	return 0;
}