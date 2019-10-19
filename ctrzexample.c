#include <stdio.h>

int main(){
	char c[5];
	while(1) {
		printf("press ctr+z to stop!");
		char *p = fgets(c, 4, stdin);
		if(!p) {
			break;
		}
	}
	return 0;
}

