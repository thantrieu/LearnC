#include <stdio.h>

void errMessage(FILE *f) {
	fprintf(f, "FILE NOT FOUND OR INVALID VALUE");
}

int countDigits(long long n) {
	int count = 0;
	while(n > 0) {
		n /= 10;
		count++;
	}
	return count;
}

int sumOfDigits(long long n) {
	int sum = 0;
	while(n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	FILE *fRead = fopen("INPUT3.IN", "r");
	FILE *fWrite = fopen("OUTPUT3.OUT", "w");
	long long n;
	if(fRead) {
		fscanf(fRead, "%lld", &n);
		if(n <= 0) {
			errMessage(fWrite);
		} else {
			int res = countDigits(n);
			if(res >= 13) {
				errMessage(fWrite);
			} else {
				int sum = sumOfDigits(n);
				fprintf(fWrite, "%d", sum);
			}
		}
	} else {
		errMessage(fWrite);
	}
	
	fclose(fRead);
	fclose(fWrite);
	
	return 0;
}
