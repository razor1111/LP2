#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int const tam = 5;
int const tam2 = 3;
int codigo[tam];
float preco[tam];
int codigoOriginal[tam];
int vetorDesordenado[tam];
int k = 0 ;
float media = 0;

void entrada(){
	
	for (int i = 0 ; i < tam ; i++)
	{
		printf("Insira o código e o preço do produto %d respectivamente: \n", i + 1);
		scanf("%d", &codigo[i]);
		scanf("%f", &preco[i]);
		vetorDesordenado[i] = preco[i];
		system("cls");

	}
}


void imprimeVetor(){
	printf("\n\n");
	
	for(int i = 0 ; i < tam; i++)
	{
		printf("{Código:%d Preço:%d}", codigo[i], vetorDesordenado[i]);
	}
}


void teste(int num){
	
    for(int i = 0 ; i < tam; i++){
			if( num == vetorDesordenado[i])
			{
				codigoOriginal[k] = i;
				k++;
			}
		}
}


void maisCaro(){
	
		int aux = 0;
		for(int i = 0 ; i < tam; i++)
		{
			for(int j = i + 1; j < tam; j++)
			{
				if(preco[i] < preco[j])
				{
					aux = preco[i];
					preco[i] = preco[j];
					preco[j] = aux;
				}
			}
		}
		for(int i = 0 ; i < tam; i++){
			teste(preco[i]);
		}
		printf("\n\n");
		printf("Artigos Mais Caros:");
		for(int i = 0 ; i < tam2; i++){
			printf("{Código: %d Preço: %.2f}", codigo[codigoOriginal[i]], preco[i]);
		}
}


void mediaValores(){
	
    float soma = 0;
    for(int i = 0 ; i < tam2; i++){
			soma = soma + preco[i];
		
       }
    printf("\n\n");
	media = (soma / tam2);
	printf("Média:%.2f", media);
	printf("\n\n");
}


void superarMedia(){
	
    printf("Superior a Média:"); 
	for(int i = 0 ; i < tam; i++){
			if(vetorDesordenado[i] > media)
			{
				printf("{Código:%d Preço:%d}", codigo[i], vetorDesordenado[i]);
			}
       }


}

int main(int argc, char** argv){
	
		setlocale(LC_ALL, "Portuguese");
		entrada();
        imprimeVetor();
		maisCaro();
		mediaValores();
		superarMedia();
		return 0;
}
