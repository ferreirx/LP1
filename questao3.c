#include <stdio.h>
int main (){
	int num1, num2, maior, menor;
	scanf("%d",&num1);
	scanf("%d",&num2);
	if (num1 > num2){
		maior = num1;
		menor = num2;
	} else{
		maior = num2;
		menor = num1;
	}
	while (maior != menor){
		maior--;
		if (maior%2==0){
			printf("%d ",maior);
		}
	}
	return 0;
}
