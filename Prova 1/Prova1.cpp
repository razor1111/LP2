#include <stdio.h>
#include <stdlib.h>

int const vetA = 5;
int const vetB  = 10;
int const vetC  = 15;
int a[vetA];
int b[vetB];
int c[vetC];


void entrada(){

	int i = 0, j = 0;
	for(i = 0 ; i < vetA; i++)
	{
		printf("Insira o %d elemendo do vetor A : ", i + 1);
		scanf("%d", &a[i]);
	}
		system("cls");
	for(j = 0 ; j < vetB ; j++)
	{
		printf("Insira o %d elemento do vetor B : " , j + 1);
		scanf("%d", &b[j]);
	}
		system("cls");

}

bool primo(int num){
	
	int cont = 0;
	int i = 0;
	for(i = 1 ; i <= num ; i++ )
	{
		if(num % i == 0)
		{
			cont++;
		}
	}
	if(cont == 2)
	{
		return true;
	}
	else
	{
		return false;
	}

}

void saida(){
	
	printf("Vetor A:");
	for(int i = 0 ; i < vetA; i++)
	{
		printf("{ %d }", a[i]);

	}
	printf("\n\n");
	printf("Vetor B:");
	for(int j = 0 ; j < vetB; j++)
	{
		printf("{ %d }", b[j]);
	}
}

bool verificaRepetido(int num){
	
	int i = 0 ;
	int cont = 0;
	while(i < vetC)
	{
		if(c[i] == num)
		{
			cont ++;

		}
		i++;

	}
	if(cont > 1)
	{
		return true;
	}
	else
	{
		return false;
	}


}

void uniao(){
	
	int z = 0;
	int cont = 0;
	int aux = 0 ;
	for(int i = 0 ; i < vetA; i++)
	{
		c [z]  = a[i];
		z++;
		cont++;
	}
	for(int z = 0 ; z < vetB; z++)
	{
		c[cont] = b[z];
		cont++;
	}

	for(int y = 0 ; y < vetC ; y++)
	{
		for(int o = y + 1; o < vetC; o++ )
		{
			if(c[y] > c[o])
			{
				aux = c[y];
				c[y] = c[o];
				c[o] = aux;
			}
		}
	}
	printf("\n\n");
	printf("Uniao:");

	for(int h = 0 ; h < vetC; h++)
	{
		if(verificaRepetido(c[h]) == false)
		{
			printf("{ %d }", c[h]);

		}

	}

}

bool verificaIntersecao(int num){
	
	int i = 0 ;
	int cont = 0;
	while (i < vetB){
		if(b[i] == num)
		{
			cont++;
			
		}
		i++;
	}
	if(cont >= 1)
	{
		return true;
	}
	else
	{
		return false;
	}


}

void intersecao(){
	
	printf("\n\n");
	printf("Interseccao:");

	for(int i = 0 ; i < vetA; i++)
	{
		if(verificaIntersecao(a[i]))
		{
			
				printf("{ %d }", a[i]);
			
		}
	}
}


void imprimirPrimo(){
	
	printf("\n\n");
	printf("Primos:");
	for(int i = 0 ; i < vetC; i++)
	{
		if(primo(c[i]))
		{
			if(c[i] != c[i + 1])
			{
				printf("{ %d }", c[i]);
			}
		}
	}
}

int main(int argc, char** argv){
	
	entrada();
	saida();
	uniao();
	intersecao();
	imprimirPrimo();
	printf("\n\n");
	return 0;
}
