#include <stdio.h>
int main (){
	void exibirVetor(int vet[5]){
		for (int i = 0; i < 5; i++){
			printf("%d ",*(vet+i));
		}	
	}
	void lerVetor(int vet[5]){
		for (int i = 0; i < 5; i++){
			scanf("%d",&vet[i]);
		}	
	}
	void removerValor(int vet[5]){
		int i;
		printf("\nIndice do vetor que deseja remover: ");
		scanf("%d",&i);
		vet[i] = 0;
		int aux;
		for (i; i < 4; i++){
			aux = vet[i];
			vet[i] = vet[i+1];
			vet[i+1] = aux;
		}
	}

	int vet[5];
	lerVetor(vet);
	exibirVetor(vet);
	removerValor(vet);
	exibirVetor(vet);
	return 0;
}
