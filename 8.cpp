#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int vet[10];
int w [10];

void entrada()
{
	for(int i = 0 ; i < 10; i++)
	{
		printf("Insira o %d valor do vetor ", i + 1);
		scanf("%d", &vet[i]);
	}
}

int fatorial(int n)
{
	if ((n == 1) || (n == 0)) {
	return 1;
	}else{
		return fatorial(n - 1) * n;
	}
}




void saidaW()
{
	for(int i = 0 ; i<10;i++){
		w[i] = fatorial(vet[i]);
	}
	
	for(int i = 0 ; i<10;i++){
		printf("{%d}\n",w[i]);
	}

}






int main(int argc, char** argv)
{
	entrada();
	saidaW();
	return 0;
}
