#include <stdio.h>
#include <string.h>
int main(){
	struct Pessoa{
		int idade;
		char nome[25];
	};
	struct Pessoa pessoas[100];
	int n;
	FILE* f = fopen("/tmp/ex8.bin","wb");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("\nIDADE: ");
		scanf("%d",&pessoas[i].idade);
		printf("\nNOME: ");
		scanf("%s",&pessoas[i].nome);
	}
	for(int i = 0; i < n; i++){
		fwrite(&pessoas[i].idade, sizeof(int), 1, f);
		fwrite(&pessoas[i].nome, sizeof(char),
	strlen(pessoas[i].nome), f);
	pessoas[i].nome[24] = '\0';
	}
	
	fclose(f);
	return 0;
}
