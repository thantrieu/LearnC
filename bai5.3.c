#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRevert(char *c){ // kiem tra thuan nghich
    char x[100];
    strcpy(x, c);
    strrev(c);
    return strcmp(x, c) == 0;
}

int main() {
    long i;
    char x[10];
    for(i = 111111111; i<= 999999999; i++){
        ltoa(i, x, 10);
        if(isRevert(x)){
            printf("%10d", i);
        }
    }
    return 0;
}
