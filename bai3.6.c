#include<stdio.h>

int ucln(int a, int b){
    while(a != b){
        if(a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a; // tim dc gia tri ucln
}

int main(){
    int a, b;
    puts("Nhap vao a, b > 0 va a <= b: ");
    scanf("%d%d", &a, &b);

    if(a > 0 && b > 0){
        int i, j;
        for(i = a; i<= b; i++){
            for(j = i+1; j<= b; j++){
                if(ucln(i, j) == 1){
                    printf("%d - %d\n", i, j);
                }
            }
        }
    } else {
        printf("Vui long nhap a <= b, a, b > 0");
    }

    return 0;
}
