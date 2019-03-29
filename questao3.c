#include <stdio.h>
int main (){
	int num1, num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	while (num1 > num2){
		num1-=1;
		if (num1 % 2 == 0){
			printf("%d ",num1);
		}
	}
	while (num2 > num1) {
		num2-=1;
		if (num2 % 2 == 0){
			printf("%d ",num2);
		}
	}
	return 0;
}
