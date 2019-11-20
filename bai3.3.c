#include<stdio.h>

int main(){
	unsigned int h;
	scanf("%d", &h);
	int i, j;
	for(i= 0; i < h; i++){
		for(j = 0; j <= i; j++) {
			printf(" * ");
		}
		printf("\n\n");
	}
	return 0;
}
