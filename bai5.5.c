#include <stdio.h>
#include <string.h>

void countLetters(char *c) {
    int i;
    int size = strlen(c);
    int b[97+26] = {0};
    for(i = 0; i< size; i++){
        char w = tolower(c[i]);
        b[w]++;
    }
    for(i = 97; i< 123; i++){
        printf("%c: %d\n", (char)i, b[i]);
    }
}

void countLettersA(char *c) {
    int i;
    int size = strlen(c);
    int b[97+26] = {0};
    for(i = 0; i< size; i++){
        b[c[i]]++;
    }
    for(i = 65; i< 91; i++){
        printf("%c: %d\n", (char)i, b[i]);
    }
    for(i = 97; i< 123; i++){
        printf("%c: %d\n", (char)i, b[i]);
    }
}

int main() {
    char x[100];
    fgets(x, 99, stdin);

    puts("Dem ki tu co phan biet chu hoa, chu thuong: ");
    countLettersA(x);
    printf("\n\n");

    puts("Dem ki tu khong phan biet chu hoa, chu thuong: ");
    countLetters(x);

    return 0;
}
