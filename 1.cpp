#include <stdio.h>
#include <stdlib.h>

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
		if(num[i]%2 == 0){
			printf("{%d} - Par ",num[i]);
		}else{
			printf("{%d} - Impar ",num[i]);
		}
	}
	
}


int main(int argc, char** argv)
{
	entrada();
	saida();
	
	return 0;
}