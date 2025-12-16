#include <stdio.h>

int n;

int odd() {
	if(n % 2 == 1) {
		n = n * 3 + 1;
		printf("%d ", n);
		return n;
	} else {
		n = n / 2;
		printf("%d ", n);
		return n;
	}
}

int main() {
	scanf("%d", &n);
	while(n != 1) {
		odd();
	}
	return 0;
}
