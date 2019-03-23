#include <stdio.h>
int main(){
	int temps[50];
	float media = 0, soma = 0;
	for (int i = 0; i < 50; i++){
		scanf("%d",&temps[i]);
		while (-100 > temps[i] || temps[i] > 100){
			printf("Erro. Escreva uma temperatura entre -100 e 100\n");			
			scanf("%d",&temps[i]);
		}
		soma +=temps[i];
	}
	media = soma/50;
	printf("Media: %.2f\n",media);
	printf("Temperaturas acima da média: ");
	for (int i = 0; i < 50; i++){
		if (temps[i] > media){
			printf("%d ",temps[i]);
		}
	}

	return 0;
}
