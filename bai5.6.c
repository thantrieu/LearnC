#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isWhiteSpace(char c){
    if(c == ' ' || c == '\t') {
        return 1;
    }
    return 0;
}

void removeSpace(char *arr) {
    while(isWhiteSpace(arr[0])) {
        int size = strlen(arr) - 1;
        int i;
        for(i = 0; i< size; i++){
            arr[i] = arr[i+1];
        }
    }
    // giua:
    int i = 1;
    while(i <  strlen(arr)){
        if(isWhiteSpace(arr[i]) && isWhiteSpace(arr[i+1])){
            int j = i+1;
            int size = strlen(arr) - 1;
            for(; j <size; j++) {
                arr[j] = arr[j+1];
            }
            i--;
        }
        i++;
    }

    // cuoi
    i = strlen(arr) - 1;
    while(isWhiteSpace(arr[i])) {
        arr[i] = '\0';
        i--;
    }
}

int isD(char c){
	if(c == '?' || c == ',' || c == ';' || c == ':'
	|| c == '!' || c == '.') {
		return 1;
	}
	return 0;
}

void removeBeforeC(char * arr){
	int i = 0;
	while(i <  strlen(arr)){
        if(!isWhiteSpace(arr[i]) && isD(arr[i+1])){
            int j = i;
            int size = strlen(arr);
            for(; j < size; j++) {
                arr[j] = arr[j+1];
            }
//            i--;
        }
        i++;
    }
}

void uperLower(char* arr){
	int i;
	int size = strlen(arr) - 1;
	for(i = 0; i < size; i++){
		arr[i] = tolower(arr[i]);
	}
	
	arr[0] = toupper(arr[0]);
	for(i = 1; i< size; i++) {
		if(isWhiteSpace(arr[i]) && !isWhiteSpace(arr[i+1])) {
			arr[i+1] = toupper(arr[i+1]);
		}
	}
}

// dau cach truoc cac dau .,?!;:

int main() {
    char x[100];
    fgets(x, 99, stdin);
    removeSpace(x);
    removeBeforeC(x);
    uperLower(x);
    puts(x);
    return 0;
}
