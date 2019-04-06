#include <stdio.h>
void compra(int* conta, int valor){
	*conta = *conta - valor;
}
int main (){
	int conta_h, conta_m;
	int *conta;
	printf("Saldo do homem: ");
	scanf("%d",&conta_h);
	printf("Saldo da mulher: ");
	scanf("%d",&conta_m);
	if (conta_h > conta_m){
		conta = &conta_h;
	}
	else {
		conta = &conta_m;	
	}
	compra(conta,500);
	printf("Saldo do homem após a compra: %d\nSaldo da mulher após a compra: %d\n", conta_h, conta_m);
	return 0;
}
