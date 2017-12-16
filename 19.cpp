#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
int gabarito[] = {5, 4, 3, 2, 1};
int resposta[3];
int copiaVetor[3];
int acertoAluno[3];
int incrementa[3];
char nomes[5][100];
int z = 0;


void entrada()
{
	int k = 0 , j = 0;
	int cont = 0;
	for(int i = 0 ; i < 3; i++)
	{
		j = 0;
		printf("Insira o %d nome: ", i + 1);
		scanf("%s", &nomes[i]);
		fflush(stdin);
		while(j < 3)
		{
			cont = 0;
			printf("Insira a resposta da questão %d ", j + 1);
			scanf("%d", &resposta[j]);
			j++;
		}
		for(int p = 0 ; p < 3; p++)
		{
			if(resposta[p] == gabarito[p])
			{
				cont++;
			}
		}

		acertoAluno[k] = cont;
		k++;
	}
}


void saidaNormal()
{
	printf("\n\n");
	printf("Saída Normal:");
	for(int i = 0 ; i < 3; i++)
	{
		copiaVetor[i] = acertoAluno[i];
		printf("{ Nome:%s Nota:%d }", nomes[i], acertoAluno[i]);
	}

}

void teste(int num){
	for(int i = 0 ; i<3;i++){
		if(num == acertoAluno[i]){
			incrementa[z] = i;
			z++;
		}
	}
	
	
	
}

void decrescente(){
	int aux = 0 ;
		for(int i = 0 ; i < 3; i++)
		{
			for(int j = i + 1; j < 3; j++)
			{
				if(copiaVetor[i] < copiaVetor[j])
				{
					aux = copiaVetor[i];
					copiaVetor[i] = copiaVetor[j];
					copiaVetor[j] = aux;
				}
			}
		}
		for(int i = 0 ; i<3;i++){
			teste(copiaVetor[i]);
		}
}

void imprimeDecrescente(){
	printf("\n\n");
	printf("Em Ordem Decrescente:");
	for(int i = 0 ; i< 3 ; i++){
		printf("{ Nome:%s Nota:%d }",nomes[incrementa[i]],copiaVetor[i]);
	}
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	entrada();
	saidaNormal();
	decrescente();
	imprimeDecrescente();

	return 0;
}
