#include <stdio.h>
void compra(int* conta, int valor){
	*conta = *conta - valor;
}
int main (){
	int conta_h, conta_m;
	int *conta;
	int compras[] = {100, 50, 80, 30, 20};
	printf("Saldo do homem: ");
	scanf("%d",&conta_h);
	printf("Saldo da mulher: ");
	scanf("%d",&conta_m);

	for (int i = 0; i<=4; i++){
		if (conta_h >= conta_m){
			conta = &conta_h;
		}
		else {
			conta = &conta_m;	
		}
		compra(conta,compras[i]);
	}
	printf("\nSaldo final do homem: %d\nSaldo final da mulher: %d\n", conta_h, conta_m);
	return 0;
}
