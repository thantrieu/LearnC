#include <stdio.h>
#include <string.h>

int isWhiteSpace(char c){
    return (c == ' ' || c == '\t');
}

int countWords(char *arr){
    int count = 0;
    int i;
    int size = strlen(arr);
    for(i = 0; i< size-1; i++){
        if(!isWhiteSpace(arr[i]) && isWhiteSpace(arr[i+1]) ||
           !isWhiteSpace(arr[i]) && !isWhiteSpace(arr[i+1]) && i+1 == size-1) {
            count++;
        }
    }
    return count;
}

int main() {
    char input[1000];
    fgets(input, 999, stdin);

    int result = countWords(input);
    printf("So tu trong cau: %d", result);

    return 0;
}
