#include <stdio.h>
int main (){
	int a, b;
	int *p;
	scanf("%d",&a);
	scanf("%d",&b);

	if (a > b){
		p = &a;
	}
	else {
		p = &b;
	}

	*p = *p - 50;
	
	printf("%d %d\n", a, b);
	return 0;
}
