#include<stdio.h>

int main(){
	unsigned int h;
	scanf("%d", &h);
	int j, i;
	for(i = 0; i< h; i++) {
		for(j = 0; j < 2 * h; j++){
			if(j >= (h - 1 - i) && j <= (h - 1 + i)) {
				printf(" * ");
			} else {
				printf("   ");
			}
		}
			
		printf("\n");
	}
	
	return 0;
}
