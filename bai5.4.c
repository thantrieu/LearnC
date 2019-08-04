#include <stdio.h>
#include <string.h>
#include <ctype.h>

void upperCase(char *c){
    int i;
    int size = strlen(c);
    for(i = 0; i< size; i++){
        c[i] = toupper(c[i]);
    }
    printf("Xau ki tu sau khi viet hoa: \n%s\n", c);
}

void lowerCase(char *c){
    int i;
    int size = strlen(c);
    for(i = 0; i< size; i++){
        c[i] = tolower(c[i]);
    }
    printf("Xau ki tu sau khi viet thuong: \n%s", c);
}

int main() {
    char x[100];
    fgets(x, 99, stdin);

    upperCase(x);

    lowerCase(x);

    return 0;
}
