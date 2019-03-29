#include <stdio.h>
int main (){
	int notas[5];
	float soma = 0, media = 0;
	for (int i = 0; i <=4; i++){
		scanf("%d",&notas[i]);
		while (notas[i] < 0 || notas[i] > 100){
			printf("Só são permitidos valores que variam entre 0 e 100. Coloque uma nota válida.\n");
			scanf("%d",&notas[i]);
		}
		soma+=notas[i]; 
	}
	media = soma/5;
	printf("%.2f\n",media);
	for (int i = 0; i<=4; i++){
		if (notas[i] > media){
			printf("%d ",notas[i]);
		}
	}
	return 0;
}
