#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int const t = 5;
int num[t];

void entrada(){
	for(int i = 0 ; i<t;i++){
		printf("Insira o %d elemento do vetor: ",i+1);
		scanf("%d",&num[i]);
	}
	system("cls");
	
}


void saida(){
	for(int i = 0 ; i<t;i++){
		if(num[i]%6 == 0){
			printf("{%d} - é multiplo de 6 \n",num[i]);
		}
	}
	
}


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Portuguese");
	entrada();
	saida();
	
	return 0;
}