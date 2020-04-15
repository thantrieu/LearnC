#include <stdio.h>
#include <stdlib.h>

struct X{
	char *name;
	int age;
};

void getInfo(struct X *x) {
	x->name = (char*) malloc(50);
	printf("Name: ");
	scanf("%s", x->name);
	printf("age: ");
	scanf("%d", &(x->age));
}

int main() {
	struct X x;
	getInfo(&x);
	printf("%s, %d", x.name, x.age);
	return 0;
}

